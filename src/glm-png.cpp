#include <gl/glut.h>
#include "gl/glpng.h"

//extern void pngSetStandardOrientation(int);
//extern unsigned int pngBind(const char *filename, int mipmap, int trans, pngInfo *info, int wrapst, int minfilter, int magfilter);

int myPngLoader (char* texfile)
{
// PNG_SOLID -1
// PNG_NOMIPMAP 0
	pngSetStandardOrientation(1);		
    unsigned int id = pngBind (texfile, 0, -1, NULL, GL_CLAMP, GL_NEAREST, GL_NEAREST);
	return id;
}
