### gltest
##### A utility program that prints the vendor, renderer and version of OpenGL of your machine, if supported.

Example of running this software:
>./a.out  
>GL_VENDOR: NVIDIA Corporation  
>GL_RENDERER: NVIDIA GeForce GTX 1080 Ti/PCIe/SSE2  
>GL_VERSION: 4.6.0 NVIDIA 525.85.05  

##### Compilation:
To compile this program, run this in your command line:
>cc main.c -lglfw -lGL

GLFW is a required library for this program. To install GLFW, run this in your command line:
>sudo apt install libglfw3-dev
