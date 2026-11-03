// ScaleformFontLib, the game's GFxFontLib (Scaleform's font library state),
// and the minimal declaration of GFxFontLib it derives from.
//
// ScaleformFontLib's name and bases come from RTTI (GFxFontLib, GFxState,
// GRefCountBase<GFxState, 2>, ...). Only what the game's code shows is declared:
// GFxFontLib's destructor and slot 0x04 are out-of-line library code reached
// by their fn_ names, its memory comes from Scaleform's heap (fn_8267BE38), and
// the member at +0x10 is a Scaleform array of fonts (destructor fn_82F54000,
// fn_82674198 removes the last font). Field names are placeholders.

#ifndef SCALEFORM_SCALEFORMFONTLIB_H
#define SCALEFORM_SCALEFORMFONTLIB_H

extern "C" {
void fn_8267BE38(void *block);    // Scaleform's operator delete
void fn_82688D30(void *fontLib);  // GFxFontLib::~GFxFontLib
void fn_82688300(void *fontLib);  // GFxFontLib slot 0x04
void fn_82F54000(void *array);    // the font array's destructor
void fn_82674198(void *array);    // removes the last font
}

class __declspec(novtable) GFxFontLib {
public:
    static void operator delete(void *block) { fn_8267BE38(block); }

    virtual __forceinline ~GFxFontLib() { fn_82688D30(this); }
    virtual void vf04() = 0;

    char unk04[0xC];
};

class ScaleformFontLib : public GFxFontLib {
public:
    struct FontArray {
        void *first;
        void *last;
        __forceinline ~FontArray() { fn_82F54000(this); }
        __forceinline void Clear()
        {
            while (first != last) {
                fn_82674198(this);
            }
        }
    };

    virtual ~ScaleformFontLib();
    virtual void vf04();

    FontArray unk10;
};

#endif
