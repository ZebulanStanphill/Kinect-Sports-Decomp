extern int XexUnloadImage(void *);extern void fn_82A31F28(int);
unsigned char fn_82A1F348(void *image) {int status=XexUnloadImage(image);if(status<0){fn_82A31F28(status);return 0;}return 1;}
