Fork of <https://github.com/yangdigi/vial-qmk/tree/vial>

Personal config is under `keyboards/ydkb/hhkb_ble/keymaps/vial`

## To flash Yang BLE HHKB

1. Connect keyboard to PC via USB cable
2. LShift + RShift + LCtrl + B to enter flash mode
  - The KB should show up as a USB storage
3. Build the firmware
```bash
make ydkb/hhkb_ble:vial && mv ydkb_hhkb_ble_vial.bin HHKB_BLE.BIN && ls -la
```
4. Flash the firmware, upon success, the keyboard should disconnect as a USB storage
```bash
sudo dd if=./HHKB_BLE.BIN of=/dev/sdb seek=4 && sync
```

## Setting keymap, after flashing

1. Connect keyboard to PC via USB cable
1. Follow instruction [here](https://ydkb.io/help/#/en/other-firmware/vial) to install VIA
1. Load keymap json from `keyboards/ydkb/hhkb_ble/vial/jingyang_hhkb.json`