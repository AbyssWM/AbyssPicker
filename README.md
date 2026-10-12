# AbyssPicker

AbyssPicker – color picker for Abyssland, fork of [hyprpicker](https://github.com/hyprwm/hyprpicker) (BSD-3, © hyprwm/vaxerski)

Part of [Abyss](https://github.com/AbyssWM). Based on hyprpicker v0.4.7.

A wlroots-compatible Wayland color picker that does not suck.

![abysspickerShort](https://user-images.githubusercontent.com/43317083/188224867-7d77a3b3-0a66-488c-8019-39b00060ab42.gif)

# Usage

Launch it. Click. That's it.

## Options

See `abysspicker --help`.

# Installation

## Abyss ecosystem

AbyssPicker installs to `/opt/abyss` together with the other Abyss components (build with `sh tools/build.sh AbyssPicker` from AbysslandWC, or the CMake commands below with `-DCMAKE_INSTALL_PREFIX=/opt/abyss`). Its dependencies (Abyssutils, Abyss-scanner) must be installed there first; use `PKG_CONFIG_PATH=/opt/abyss/lib/pkgconfig`.

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
cmake --no-warn-unused-cli -DCMAKE_BUILD_TYPE:STRING=Release -DCMAKE_INSTALL_PREFIX:PATH=/opt/abyss -S . -B ./build
cmake --build ./build --config Release --target abysspicker -j`nproc 2>/dev/null || getconf _NPROCESSORS_CONF`
```

Install with:

```sh
cmake --install ./build
```

# Caveats

AbyssPicker needs the `zwlr_screencopy_manager_v1` and `zwlr_layer_shell_v1` protocols. Abyssland can disable `zwlr_screencopy_manager_v1` via its config (`c.protocol`); in that case the picker will not work. This is intentional and the user's responsibility.

"Freezes" your displays when picking the color.

## Credits

AbyssPicker exists thanks to **[hyprpicker](https://github.com/hyprwm/hyprpicker)**, created by **vaxerski / Hypr Development** at **[hyprwm](https://github.com/hyprwm)**. All credit for the original work goes to them. Abyss is an independent project and is **not affiliated with or endorsed by hyprwm**.

## License

BSD 3-Clause License. The original copyright notice is kept in [`LICENSE`](LICENSE).

## Contributors

- [bb8TheRobot](https://github.com/bb8TheRobot)
- Claude (Anthropic) – AI pair programmer
