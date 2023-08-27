### Intro

One problem that CMake users often face is sharing settings with other people for common ways to configure a project. This may be done to support CI builds, or for users who frequently use the same build. CMake supports two files, CMakePresets.json and CMakeUserPresets.json, that allow users to specify common configure options and share them with others.

#### To list all available presets 

`cmake --list-presets=all .`

#### To configure with a given preset

`cmake --preset=with-logs`

#### To build the project with a given preset 

`cmake --build --preset=with-logs && .\cmake-build-with-logs\use-cmake-presets.exe`

### Sources 

- https://dev.to/younup/cmake-presets-enfin-un-moyen-de-partager-les-configurations-de-nos-projets-4449