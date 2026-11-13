// Placeholder for the 12-byte reference-counted file object that
// GFxFileOpener's second virtual function creates for a path: a vtable, a
// reference count that starts at one, and a pointer to the opened file that
// starts null. Named after the address of its constructor until its real name
// is known. Its vtable is lbl_82006020, which the constructor stores by hand.

#ifndef GAME_FILE_82693A48_H
#define GAME_FILE_82693A48_H

#include "game/String_8268C510.h"

extern "C" {
void *fn_8267B890(void *heap, unsigned int size, unsigned int unk);
extern void *lbl_831E7E64; // Scaleform's global heap
}

struct RefCounted_82693A48 {
    void *vtbl;
    int refs;

    RefCounted_82693A48() : refs(1) {}
};

struct FilePtr_82693A48 {
    void *file;

    FilePtr_82693A48() : file(0) {}
};

struct File_82693A48 : RefCounted_82693A48 {
    FilePtr_82693A48 file;

    File_82693A48(const String_8268C510 &path, int flags, int mode);

    static void *operator new(unsigned int size) { return fn_8267B890(lbl_831E7E64, size, 0); }
};

#endif
