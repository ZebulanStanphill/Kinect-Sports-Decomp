// The game's ScaleformMovieView and the commands it queues, as far as the
// command classes need them.
//
// Class names and the inheritance of the commands come from RTTI. Member names
// are placeholders named after their offsets; parameters and return types are
// inferred from the code. ScaleformMovieView itself is declared only up to the
// field the commands read: its bases (std::tr1::enable_shared_from_this and
// GRareTextureD3D9ResourceOwner) and the rest of its layout are not known yet.

#ifndef SCALEFORM_SCALEFORMMOVIEVIEW_H
#define SCALEFORM_SCALEFORMMOVIEVIEW_H

#include "game/String_82230110.h"

extern "C" {
void *fn_8265C9E0(unsigned int size);
void fn_8265CA20(void *block);
// The value array's constructor from (values, count), and its clear.
void fn_826700E0(void *array, const void *values, unsigned int count);
void fn_8266FF40(void *array, unsigned int count);
// Out-of-line body of ScaleformCommand's destructor: releases the weak
// pointer to the movie view.
void fn_82670A50(void *command);
}

// A growable array of Scaleform values.
struct ValueArray_826700E0 {
    void *items;
    unsigned int count;

    ValueArray_826700E0() {}
    __forceinline ValueArray_826700E0(unsigned int n) : items(0), count(n) {}
    __forceinline ValueArray_826700E0(const void *values, unsigned int n)
        : items(0), count(n)
    {
        fn_826700E0(this, values, n);
    }
};

class ScaleformMovieView {
public:
    char unk00[0xF0];
    int unkF0; // Non-zero once the movie exists; commands wait for it.

    struct WeakPtr {
        ScaleformMovieView *ptr;
        void *rep;
        __forceinline WeakPtr() : ptr(0), rep(0) {}
    };

    // A command for the movie view, queued and run later by vf04, which
    // returns true when it could not run yet.
    class __declspec(novtable) ScaleformCommand {
    public:
        static void operator delete(void *block) { fn_8265CA20(block); }

        // The first takes a weak pointer's two words, the second the movie view.
        ScaleformCommand(const void *view);
        ScaleformCommand(ScaleformMovieView *movieView);
        virtual __forceinline ~ScaleformCommand() { fn_82670A50(this); }
        virtual bool vf04() = 0;

        WeakPtr unk04;
        ScaleformMovieView *unk0C;
        bool unk10;
    };

    class ScaleformCommandInvoke : public ScaleformCommand {
    public:
        ScaleformCommandInvoke(const void *view, const char *method, const void *args, unsigned int count);
        virtual ~ScaleformCommandInvoke();
        virtual bool vf04();

        String_82230110 unk14; // Method name
        ValueArray_826700E0 unk30; // Arguments
    };

    class ScaleformCommandCallActionScriptCallback : public ScaleformCommand {
    public:
        ScaleformCommandCallActionScriptCallback(const void *view, const char *name, const void *args, unsigned int count);
        virtual ~ScaleformCommandCallActionScriptCallback();
        virtual bool vf04();

        String_82230110 unk14; // Callback name
        ValueArray_826700E0 unk30; // Arguments
    };

    class ScaleformCommandSetVariableArray : public ScaleformCommand {
    public:
        ScaleformCommandSetVariableArray(const void *view, const char *name, unsigned int type, const void *values, unsigned int count, unsigned int index);
        virtual ~ScaleformCommandSetVariableArray();
        virtual bool vf04();

        String_82230110 unk14; // Variable name
        unsigned int unk30;    // Type
        ValueArray_826700E0 unk34; // Values
        unsigned int unk3C;    // Index
    };

    class ScaleformCommandSetDrawModelTexturesSetDynamicTexture : public ScaleformCommand {
    public:
        ScaleformCommandSetDrawModelTexturesSetDynamicTexture(const void *view, void *texture);
        virtual ~ScaleformCommandSetDrawModelTexturesSetDynamicTexture() {}
        virtual bool vf04();

        void *unk14; // Texture
    };

    class ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture : public ScaleformCommand {
    public:
        ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture(const void *view, void *texture);
        virtual ~ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture() {}
        virtual bool vf04();

        void *unk14; // Texture
    };
};

#endif
