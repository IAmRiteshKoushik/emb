# Template project folder

This folder includes all files that you should need for your SPECIFIC processor.
Other files such as compiler and libraries are universal and should be somewhere 
else, like your HOME folder.

Edit Makefile to include your own libraries and the correct path to stlib (in HOME).
Also you can change output file name and replace YOURUSERNAME to correct path.

My folder structure is as follows:
- **/home/username/arm**
  - `/stlink`
  - `/STM32F4-Discovery_FW_V1.1.0`
  - `/arm-gnu-toolchain-13.3.rel1-x86_64-arm-none-eabi`

An important StackOverflow article from which I have shamelessly copy-pasted a 
solution because I did not have the breadth of knowledge to understand it properly

> `Errors with _sbrk` and other similar errors which created compilation issues

https://stackoverflow.com/questions/5764414/undefined-reference-to-sbrk
