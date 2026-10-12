<div align="center">

<img src="https://github.com/AbyssWM.png?size=200" width="160" alt="Abyss logo">

# AbyssPicker

**Color picker for Abyssland.**

Part of [**Abyss**](https://github.com/AbyssWM) · Based on [hyprpicker](https://github.com/hyprwm/hyprpicker) by [hyprwm](https://github.com/hyprwm)

</div>

---

> [!WARNING]
> **Early development.** Abyss is being rebranded and reworked right now. Nothing is ready for daily use yet.

## About

AbyssPicker is a wlroots-compatible Wayland color picker that does not suck: launch it, click, done. It needs `zwlr_screencopy_manager_v1`.

AbyssPicker is a fork of [hyprpicker](https://github.com/hyprwm/hyprpicker). Every Abyss library and tool is forked and renamed, so the whole ecosystem builds and updates as one – independent of system packages.

![abysspickerShort](https://user-images.githubusercontent.com/43317083/188224867-7d77a3b3-0a66-488c-8019-39b00060ab42.gif)

## Usage

Launch it. Click. That's it.

### Options

See `abysspicker --help`.

## Installation

### Abyss ecosystem

AbyssPicker installs to `/opt/abyss` together with the other Abyss components (build with `sh tools/build.sh AbyssPicker` from AbysslandWC, or the CMake commands below with `-DCMAKE_INSTALL_PREFIX=/opt/abyss`). Its dependencies (Abyssutils, Abyss-scanner) must be installed there first; use `PKG_CONFIG_PATH=/opt/abyss/lib/pkgconfig`.

### Manual (Building)

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

## Caveats

AbyssPicker needs the `zwlr_screencopy_manager_v1` and `zwlr_layer_shell_v1` protocols. Abyssland can disable `zwlr_screencopy_manager_v1` via its config (`c.protocol`); in that case the picker will not work. This is intentional and the user's responsibility.

"Freezes" your displays when picking the color.

## The Abyss ecosystem

| Repository | Based on |
|---|---|
| [Abyssland](https://github.com/AbyssWM/Abyssland) | [Hyprland](https://github.com/hyprwm/Hyprland) |
| [Abyssal](https://github.com/AbyssWM/Abyssal) | [aquamarine](https://github.com/hyprwm/aquamarine) |
| [Abyssutils](https://github.com/AbyssWM/Abyssutils) | [hyprutils](https://github.com/hyprwm/hyprutils) |
| [Abyssparse](https://github.com/AbyssWM/Abyssparse) | [hyprlang](https://github.com/hyprwm/hyprlang) |
| [Abysscursor](https://github.com/AbyssWM/Abysscursor) | [hyprcursor](https://github.com/hyprwm/hyprcursor) |
| [Abyssgraphics](https://github.com/AbyssWM/Abyssgraphics) | [hyprgraphics](https://github.com/hyprwm/hyprgraphics) |
| [Abysswire](https://github.com/AbyssWM/Abysswire) | [hyprwire](https://github.com/hyprwm/hyprwire) |
| [Abyss-scanner](https://github.com/AbyssWM/Abyss-scanner) | [hyprwayland-scanner](https://github.com/hyprwm/hyprwayland-scanner) |
| [Abyssland-protocols](https://github.com/AbyssWM/Abyssland-protocols) | [hyprland-protocols](https://github.com/hyprwm/hyprland-protocols) |
| [Xdg-desktop-portal-abyss](https://github.com/AbyssWM/Xdg-desktop-portal-abyss) | [xdg-desktop-portal-hyprland](https://github.com/hyprwm/xdg-desktop-portal-hyprland) |
| [Abysstoolkit](https://github.com/AbyssWM/Abysstoolkit) | [hyprtoolkit](https://github.com/hyprwm/hyprtoolkit) |
| [Abyss-guiutils](https://github.com/AbyssWM/Abyss-guiutils) | [hyprland-guiutils](https://github.com/hyprwm/hyprland-guiutils) |
| [AbyssDusk](https://github.com/AbyssWM/AbyssDusk) | [hyprsunset](https://github.com/hyprwm/hyprsunset) |
| [AbyssLock](https://github.com/AbyssWM/AbyssLock) | [hyprlock](https://github.com/hyprwm/hyprlock) |
| [AbyssPaper](https://github.com/AbyssWM/AbyssPaper) | [hyprpaper](https://github.com/hyprwm/hyprpaper) |
| **AbyssPicker** | [hyprpicker](https://github.com/hyprwm/hyprpicker) |

## Credits

AbyssPicker exists thanks to **[hyprpicker](https://github.com/hyprwm/hyprpicker)**, created by **vaxerski / Hypr Development** at **[hyprwm](https://github.com/hyprwm)**. All credit for the original work goes to them – please support the original project.

Abyss is an independent project and is **not affiliated with or endorsed by hyprwm**.

## License

This project is licensed under the **BSD 3-Clause License**. The original copyright notice is kept in [`LICENSE`](LICENSE) as required.

## Contributors

- [bb8TheRobot](https://github.com/bb8TheRobot)
- Claude (Anthropic) – AI pair programmer
