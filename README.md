# linux-micro-distro

This is a minimal example of a working Linux distribution, aka "micro distribution". It has two flavors:

1. `hello_world`: Useless `init`, just prints something to the console.
2. `little_shell`: A slightly less useless `init`. It spawns another process which handles user input and output.

You can `make` the `initramfs.cpio` from both of these directories (make sure to override the `make` flag for cross compile to match your platform).

**This repo is meant to accompany the article at http://popovicu.com/making-a-micro-linux-distro**
