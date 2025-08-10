# ReactGTK4

This is the heart of the react native port to GTK4.

## Why

One of my best friends is writing a chat application that
merges multiple providers into a singular interface and he
uses react native. I use linux and there isn't really a
"native" react native way of deploying to linux, so I'll now
attempt this here.

## Building 

> You will need nix with flakes:

```shell
cd ./react-native-gtk4
nix develop
cd ./packages/react-native
cmake -B build -G Ninja -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
ninja -C build
```
