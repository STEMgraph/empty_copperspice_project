# CopperSpice Empty Project

A minimal template for building applications with CopperSpice 1.9.

## Overview

This repository provides a clean starting point for developing CopperSpice applications. It includes a basic `CMakeLists.txt` and a simple `main.cpp` that launches an empty window.

## Prerequisites

- **CopperSpice 1.9 libraries** installed on your system.
- If you need installation guidance, see the [KitchenSink Demo](https://github.com/STEMgraph/abe720ad-32b4-4303-9b61-5875f592c05c) for detailed instructions.

## Getting Started

1. **Clone the repository**

```bash
git clone git@github.com:STEMgraph/empty_copperspice_project.git my_project_name
cd my_project_name
````

2. **Explore the source**

* The entry point is `src/main.cpp`, which currently creates and shows a blank window:

```cpp
#include <QtCore>
#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *mainWindow = new QWidget();
    mainWindow->setMinimumSize(700, 350);
    mainWindow->show();

    return app.exec();
}
```

3. **Understand the build script**

* The provided `CMakeLists.txt` supports multiple platforms.
* If you're new to CMake, review the [official CopperSpice repository](https://github.com/copperspice) for more examples.

## Installing CopperSpice Libraries

1. Determine your OS (e.g., on Linux run `lsb_release -a`).

2. Visit the CopperSpice 1.9 download page for binaries:
[https://download.copperspice.com/copperspice/binary/cs-1.9/](https://download.copperspice.com/copperspice/binary/cs-1.9/)

3. Download and extract to your preferred location:

```bash
mkdir -p ~/STEMgraph/libs/cpplibs/cs-1.9_libs
wget -O ~/STEMgraph/libs/cpplibs/cs-1.9.tar.bz2 <download_link>
tar -xvjf ~/STEMgraph/libs/cpplibs/cs-1.9.tar.bz2 -C ~/STEMgraph/libs/cpplibs/cs-1.9_libs
```

4. Set an environment variable pointing to CopperSpice CMake modules:

```bash
export CS19_LIB=$(find ~ -type d -path "*/lib/cmake/CopperSpice")
```

## Configuring the Build

Run CMake to generate build files:

```bash
cmake -B ./build/ -DCMAKE_PREFIX_PATH=$CS19_LIB
```

> You can also supply the full path to CopperSpice modules instead of using `$CS19_LIB`.

## Building the Application

Compile the project using:

```bash
cmake --build ./build/
```

## Deploying the Application

CopperSpice applications require dynamic libraries alongside the executable. To install binaries into a deployable folder:

```bash
cmake --install ./build/ --prefix ./deploy/
```

> Change `deploy` to any directory name you prefer.

## Support & Resources

* **STEMgraph Forum:** [https://github.com/orgs/STEMgraph/discussions](https://github.com/orgs/STEMgraph/discussions)
* **CopperSpice Tutorials on YouTube:**

* [Beginner Series](https://www.youtube.com/watch?v=OhyylLAHQHc&list=PLwW_X4nvqRnxfwo7tXsC3Szu-gc4sv1mp)
* [Official Channel](https://www.youtube.com/watch?v=jvxWitw00CU&list=PL9GxRn_rQx8M1FkGO0K6kqvHDdwwZ2JB2)
* **CopperSpice Journal:** [https://journal.copperspice.com/](https://journal.copperspice.com/)

```
