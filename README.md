# FBD-gui

I recently discoverd Raylib, and I, as a C developer, decided I'll create a port of FBD with a GUI version.

## Technical Badges

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![Windows](https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)
![RayLib](https://img.shields.io/badge/RAYLIB-FFFFFF.svg?style=for-the-badge&logo=raylib&logoColor=black)

## Should you use it ?

No. I don't recommend it, I only made it for my friend(I created FBD back in school with her.)
Even in the [CMakeLists.txt](../CMakeLists.txt) I used my local config for Raylib source.

## Compile and Run

Compile with GCC:
```
git clone https://github.com/FBDev64/FBD-gui.git
cd FBD-gui
gcc -o fbd-gui main.c
```

Compile with CMake:
```
git clone https://github.com/FBDev64/FBD-gui.git
cd FBD-gui
mkdir build && cd build
cmake ..
make
```

Precompiled MS Windows executabes can be downloaded from [the Releases section.](https://github.com/FBDev64/FBD-gui/releases)

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

## License

Distribute, modify and use freely under the terms of the
[BSD 3-Clause “New” or “Revised” License](https://choosealicense.com/licenses/bsd-3-clause/).
