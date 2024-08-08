from conan import ConanFile
from conan.tools.cmake import CMakeToolchain, CMake, cmake_layout, CMakeDeps


class mypkgRecipe(ConanFile):
    name = "FBD-gui"
    version = "1.2"
    package_type = "application"

    # Optional metadata
    license = "BSD-Clause 3"
    author = "Adam Ellouze elzadam11@gmail.com"
    url = "https://github.com/FBDev64/FBD-gui.git"
    description = "The GUI version of FBD using Raylib."
    topics = ("FBD", "gui", "raylib")

    # Binary configuration
    settings = "os", "compiler", "build_type", "arch"

    # Sources are located in the same place as this recipe, copy them to the recipe
    exports_sources = "CMakeLists.txt", "./main.c"

    def layout(self):
        cmake_layout(self)

    def generate(self):
        deps = CMakeDeps(self)
        deps.generate()
        tc = CMakeToolchain(self)
        tc.generate()

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def package(self):
        cmake = CMake(self)
        cmake.install()

    

    
