# OpenPype USD Resolver
[USD](https://graphics.pixar.com/usd/release/index.html) Asset Resolver for [OpenPype](https://openpype.io)

This is still in very early stages, lying down infrastructure.

## Notes about compiling USD

1) clone USD __git@github.com:PixarAnimationStudios/USD.git__
2) get inside and create Python venv: `python -m venv .venv`
3) activate newly created **venv** (`.\.venv\Scripts\activate.bat` on Windows)
4) install USD tools with `pip` - **PySide2**, **PyOpenGL**, **jinja2**
5) run build script `python .\build_scripts\build_usd.py --embree --openimageio --opencolorio --alembic --hdf5 --materialx /path/to/build/folder`
