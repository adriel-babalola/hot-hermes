# Hot Hermes 🌡️

a mini temperature sensor + display for environment and room temperatures, with a buzzer that warns me when it gets above 34°C so i dont burn my food while cooking lol.

## Why i made this

i cook a lot and my kitchen gets HOT. i wanted something small that could just sit there, show me the temperature, and scream at me (well, buzz loudly) when things get too warm. also i wanted to finally learn how I2C works and this was the perfect excuse.

## How it works

- **AHT20 module** reads the temperature and humidity over I2C
- **1.3" OLED** displays the readings in real time
- **Passive buzzer** goes off when temp hits above 34°C
- everything runs on the **XIAO RP2040**
- Then there's a case, in which everything is enclosed in
## Screenshots

> 

![alt text](image-1.png)

![alt text](image.png)

![alt text](image-2.png)

## BOM

| Item # | Designator | Description | Qty | Unit Price (USD) | Total + Shipping (USD) | Source | Link |
|--------|------------|-------------|-----|-----------------|----------------------|--------|------|
| 1 | U1 | Seeed XIAO RP2040 Microcontroller | 1 | $7.84 | $7.84 | AliExpress | [link](https://www.aliexpress.com/item/1005006593701624.html?spm=a2g0o.cart.0.0.742b38daUU8kz0&mp=1&pdp_npi=6%40dis%21USD%21USD+6.31%21USD+4.61%21%21USD+4.61%21%21%21%40211b876717768556104776423e1131%2112000039072595754%21ct%21NG%216438462769%21%211%210%21&pdp_ext_f=%7B%22cart2PdpParams%22%3A%7B%22pdpBusinessMode%22%3A%22retail%22%7D%7D) |
| 2 | DS1 | 1.3" I2C OLED Display Module 128x64 (Blue) | 1 | $2.83| $2.83 | AliExpress | [link](https://www.aliexpress.com/item/1005010183965559.html?spm=a2g0o.cart.0.0.742b38daUU8kz0&mp=1&pdp_npi=6%40dis%21USD%21USD+8.28%21USD+3.89%21%21USD+3.85%21%21%21%40211b876717768556104776423e1131%2112000051437252682%21ct%21NG%216438462769%21%211%210%21) |
| 3 | U2 | AHT20 Temperature & Humidity Sensor Module | 1 | $2.06 | $2.06 | AliExpress | [link](https://www.aliexpress.com/item/1005006088708984.html?spm=a2g0o.cart.0.0.742b38daUU8kz0&mp=1&pdp_npi=6%40dis%21USD%21USD+2.16%21USD+2.16%21%21USD+2.12%21%21%21%40211b876717768556104776423e1131%2112000035679578526%21ct%21NG%216438462769%21%211%210%21) 
| 5 | PCB | hermes_Y5 Custom PCB — 5pcs, JLCPCB | 1 | $5.00 | $11.92 | JLCPCB | [link](https://jlcpcb.com) |
|6| 3D Printing | The Case for Hot Hermes | 1 | $4 | $4.0  | Community Printer | - |
| | | | | **TOTAL** | **$28.65** | | |
