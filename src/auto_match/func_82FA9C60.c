typedef struct CellSize_82FA9C60 {
    unsigned int width;  /* 0x0 */
    unsigned int height; /* 0x4 */
} CellSize_82FA9C60;

typedef struct Layout_82FA9C60 {
    char pad[0x60];
    void *handle; /* 0x60 */
} Layout_82FA9C60;

typedef struct View_82FA9C60 {
    char pad0[0xc];
    int origin; /* 0x0c */
    char pad10[0x40 - 0x10];
    Layout_82FA9C60 *layout; /* 0x40 */
    int position;            /* 0x44 */
} View_82FA9C60;

extern void *lbl_83264304;
extern CellSize_82FA9C60 *fn_82FAF750(void *handle);
extern int fn_82FAE168(void *handle);
extern void fn_82FF4F40(void *dispatcher, void *target, unsigned int event, CellSize_82FA9C60 *size);

void fn_82FA9C60(View_82FA9C60 *view, int extent, unsigned int events, void *target)
{
    CellSize_82FA9C60 *size = fn_82FAF750(view->layout->handle);
    int scroll = view->position - view->origin;
    int firstColumn;
    int firstRow;
    int lastColumn;
    int lastRow;
    int i;
    int limit;

    if (scroll <= 0) {
        if (events & 0x400) {
            fn_82FF4F40(lbl_83264304, target, 0x400, size);
        }
        firstColumn = 0;
        firstRow = 0;
    } else {
        extent += scroll;
        firstColumn = scroll / size->width + 1;
        firstRow = scroll / size->height + 1;
    }
    lastColumn = extent / size->width + 1;
    lastRow = extent / size->height + 1;
    if ((events & 0x200) && firstRow < lastRow) {
        for (i = firstRow; i < lastRow; i++) {
            fn_82FF4F40(lbl_83264304, target, 0x200, size);
        }
    }
    if ((events & 0x100) && firstColumn < lastColumn) {
        for (i = firstColumn; i < lastColumn; i++) {
            fn_82FF4F40(lbl_83264304, target, 0x100, size);
        }
    }
    if (events & 0x800) {
        if ((int)view->layout != 0) {
            void *handle = view->layout->handle;
            limit = fn_82FAE168(handle);
        } else {
            limit = 0;
        }
        if (limit <= extent) {
            fn_82FF4F40(lbl_83264304, target, 0x800, size);
        }
    }
}
