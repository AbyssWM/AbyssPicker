# abysspicker

A wlroots-compatible Wayland color picker that does not suck.

![abysspickerShort](https://user-images.githubusercontent.com/43317083/188224867-7d77a3b3-0a66-488c-8019-39b00060ab42.gif)

# Usage

Launch it. Click. That's it.

## Options

See `abysspicker --help`.

# Installation

## Arch

`sudo pacman -S abysspicker`

## Manual (Building)

Install dependencies:
 - cmake
 - pkg-config
 - pango
 - cairo
 - wayland
 - wayland-protocols
 - abyssutils
 - xkbcommon

Building is done via CMake:

```sh
cmake --no-warn-unused-cli -DCMAKE_BUILD_TYPE:STRING=Release -DCMAKE_INSTALL_PREFIX:PATH=/usr -S . -B ./build
cmake --build ./build --config Release --target abysspicker -j`nproc 2>/dev/null || getconf _NPROCESSORS_CONF`
```

Install with:

```sh
cmake --install ./build
```

# Caveats

"Freezes" your displays when picking the color.

