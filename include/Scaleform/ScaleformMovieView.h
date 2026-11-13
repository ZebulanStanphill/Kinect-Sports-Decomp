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

extern "C" void *memcpy(void *dst, const void *src, unsigned int size);

extern "C" {
void *fn_8265C9E0(unsigned int size);
void fn_8265CA20(void *block);
// The value array's constructor from (values, count), and its clear.
void fn_826700E0(void *array, const void *values, unsigned int count);
void fn_8266FF40(void *array, unsigned int count);
// Releases a reference of a shared or weak pointer (std::tr1 _Ref_count_base).
void fn_822315A0(void *rep);
// Builds a shared pointer from a weak one (pointer, reference count).
void fn_82517978(void *shared, void *ptr, void *rep, bool unk);
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

// Called by the movie view on the render thread.
class ScaleformMovieRenderer_82673040 {
public:
    virtual void vf00(); virtual void vf04(); virtual void vf08(); virtual void vf0C(); virtual void vf10();
    virtual void vf14(); virtual void vf18(); virtual void vf1C(); virtual void vf20(); virtual void vf24();
    virtual void vf28(); virtual void vf2C(); virtual void vf30(); virtual void vf34(); virtual void vf38();
    virtual void vf3C(); virtual void vf40(); virtual void vf44(); virtual void vf48(); virtual void vf4C();
    virtual void vf50(); virtual void vf54(); virtual void vf58(); virtual void vf5C(); virtual void vf60();
    virtual void vf64(); virtual void vf68(); virtual void vf6C(); virtual void vf70(); virtual void vf74();
    virtual void vf78(); virtual void vf7C(); virtual void vf80(); virtual void vf84(); virtual void vf88();
    // Frees textures unused for the given time (fn_82673040 passes 0.0001, 2).
    virtual void vf8C(float time, int unk);
};

class ScaleformMovieView {
public:
    struct WeakPtr;

    char unk00[4];
    // std::tr1::enable_shared_from_this<ScaleformMovieView>'s weak pointer
    // (pointer, reference count).
    ScaleformMovieView *unk04;
    void *unk08;
    void *unk0C; // The movie definition (released with fn_82687270)
    ScaleformMovieRenderer_82673040 *unk10;
    char unk14[0xD4 - 0x14];
    char unkD4[0xE8 - 0xD4]; // A lock (fn_8251F718 locks it, fn_8251FA58 unlocks)
    int unkE8; // Non-zero while shutting down: no more commands are queued.
    char unkEC[4];
    int unkF0; // Non-zero once the movie exists; commands wait for it.
    int unkF4; // Set once the textures were cleaned up.

    // A std::tr1::weak_ptr<ScaleformMovieView> (pointer, reference count).
    struct WeakPtr {
        ScaleformMovieView *ptr;
        void *rep;
        __forceinline WeakPtr() : ptr(0), rep(0) {}
        __forceinline ~WeakPtr()
        {
            if (rep) {
                fn_822315A0(rep);
            }
        }
        template <class T> static __forceinline void Swap(T &a, T &b)
        {
            T t = a;
            a = b;
            b = t;
        }
        __forceinline void swap(WeakPtr &other)
        {
            Swap(rep, other.rep);
            Swap(ptr, other.ptr);
        }
        __forceinline void reset() { WeakPtr().swap(*this); }
    };

    // shared_from_this(): a std::tr1::shared_ptr built from the weak pointer at
    // +4 (fn_82517978 throws nothing: the game has no exceptions).
    struct SharedPtr {
        ScaleformMovieView *ptr;
        void *rep;
        __forceinline SharedPtr(ScaleformMovieView *wptr, void *wrep) : ptr(0), rep(0)
        {
            fn_82517978(this, wptr, wrep, true);
        }
        __forceinline ~SharedPtr()
        {
            if (rep) {
                fn_822315A0(rep);
            }
        }
    };

    // Scaleform's GViewport (0x34 bytes), with the default and copy
    // constructors the commands inline.
    struct Viewport {
        int bufferWidth;
        int bufferHeight;
        int left;
        int top;
        int width;
        int height;
        int scissorLeft;
        int scissorTop;
        int scissorWidth;
        int scissorHeight;
        float scale;
        float aspectRatio;
        unsigned int flags;

        __forceinline Viewport()
        {
            bufferWidth = 0;
            bufferHeight = 0;
            left = top = 0;
            width = height = 1;
            scissorLeft = scissorTop = scissorWidth = scissorHeight = 0;
            scale = aspectRatio = 1.0f;
            flags = 0;
        }
        __forceinline Viewport(const Viewport &o)
        {
            bufferWidth = o.bufferWidth;
            bufferHeight = o.bufferHeight;
            left = o.left;
            top = o.top;
            width = o.width;
            height = o.height;
            flags = o.flags;
            scissorLeft = o.scissorLeft;
            scissorTop = o.scissorTop;
            scissorWidth = o.scissorWidth;
            scissorHeight = o.scissorHeight;
            scale = o.scale;
            aspectRatio = o.aspectRatio;
        }
    };

    // A command for the movie view, queued and run later by vf04, which
    // returns 0 when it ran, 1 when it could not run yet and 2 when it failed.
    class ScaleformCommand {
    public:
        static void *operator new(unsigned int size) { return fn_8265C9E0(size); }
        static void operator delete(void *block) { fn_8265CA20(block); }

        // The first takes a weak pointer's two words, the second the movie view.
        ScaleformCommand(const void *view);
        ScaleformCommand(ScaleformMovieView *movieView);
        // Releases the weak pointer to the movie view.
        virtual ~ScaleformCommand();
        virtual int vf04() = 0;

        WeakPtr unk04;
        ScaleformMovieView *unk0C;
        bool unk10;
    };

    class ScaleformCommandInvoke : public ScaleformCommand {
    public:
        ScaleformCommandInvoke(const void *view, const char *method, const void *args, unsigned int count);
        virtual ~ScaleformCommandInvoke();
        virtual int vf04();

        String_82230110 unk14; // Method name
        ValueArray_826700E0 unk30; // Arguments
    };

    class ScaleformCommandCallActionScriptCallback : public ScaleformCommand {
    public:
        ScaleformCommandCallActionScriptCallback(const void *view, const char *name, const void *args, unsigned int count);
        virtual ~ScaleformCommandCallActionScriptCallback();
        virtual int vf04();

        String_82230110 unk14; // Callback name
        ValueArray_826700E0 unk30; // Arguments
    };

    class ScaleformCommandSetVariableArray : public ScaleformCommand {
    public:
        ScaleformCommandSetVariableArray(const void *view, const char *name, unsigned int type, const void *values, unsigned int count, unsigned int index);
        virtual ~ScaleformCommandSetVariableArray();
        virtual int vf04();

        String_82230110 unk14; // Variable name
        unsigned int unk30;    // Type
        ValueArray_826700E0 unk34; // Values
        unsigned int unk3C;    // Index
    };

    class ScaleformCommandSetDrawModelTexturesSetDynamicTexture : public ScaleformCommand {
    public:
        ScaleformCommandSetDrawModelTexturesSetDynamicTexture(const void *view, void *texture);
        virtual ~ScaleformCommandSetDrawModelTexturesSetDynamicTexture() {}
        virtual int vf04();

        void *unk14; // Texture
    };

    class ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture : public ScaleformCommand {
    public:
        ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture(const void *view, void *texture);
        virtual ~ScaleformCommandSetDrawModelTexturesSetDynamicSkinTexture() {}
        virtual int vf04();

        void *unk14; // Texture
    };

    // The commands below are created by ScaleformMovieView members that are
    // still C (they keep their fn_ names), so their constructors are inline
    // and reached through extern "C" wrappers.
    class ScaleformCommandAdvance : public ScaleformCommand {
    public:
        __forceinline ScaleformCommandAdvance(const void *view, float delta) : ScaleformCommand(view)
        {
            unk14 = delta;
        }
        virtual ~ScaleformCommandAdvance() {}
        virtual int vf04();

        float unk14; // Time step
    };

    class ScaleformCommandSetViewport : public ScaleformCommand {
    public:
        __forceinline ScaleformCommandSetViewport(const void *view, const Viewport &viewport)
            : ScaleformCommand(view), unk14(viewport)
        {
        }
        virtual ~ScaleformCommandSetViewport() {}
        virtual int vf04();

        Viewport unk14;
    };

    class ScaleformCommandLoadMovie : public ScaleformCommand {
    public:
        __forceinline ScaleformCommandLoadMovie(const void *view, const char *path, unsigned int unk1,
                                                unsigned int unk2, const Viewport *viewport, unsigned int unk3)
            : ScaleformCommand(view), unk14(path), unk18(unk1), unk1C(unk2), unk54(unk3)
        {
            if (viewport) {
                memcpy(&unk20, viewport, sizeof(unk20));
            }
        }
        virtual ~ScaleformCommandLoadMovie()
        {
            unk14 = 0;
            unk18 = 0;
            unk1C = 0;
        }
        virtual int vf04();

        const char *unk14;
        unsigned int unk18;
        unsigned int unk1C;
        Viewport unk20;
        unsigned int unk54;
    };

    class ScaleformCommandLoadMovieDef : public ScaleformCommand {
    public:
        __forceinline ScaleformCommandLoadMovieDef(const SharedPtr &view, const char *path, unsigned int unk)
            : ScaleformCommand(&view)
        {
            unk14 = path;
            unk18 = unk;
        }
        virtual ~ScaleformCommandLoadMovieDef() { unk14 = 0; }
        virtual int vf04();

        const char *unk14;
        unsigned int unk18;
    };

    class ScaleformCommandCleanUpTextures : public ScaleformCommand {
    public:
        __forceinline ScaleformCommandCleanUpTextures(ScaleformMovieView *view) : ScaleformCommand(view) {}
        virtual ~ScaleformCommandCleanUpTextures() {}
        virtual int vf04();
    };

    class ScaleformCommandSubstituteTexture : public ScaleformCommand {
    public:
        __forceinline ScaleformCommandSubstituteTexture(const SharedPtr &view, const char *name,
                                                        unsigned int texture)
            : ScaleformCommand(&view), unk14(name)
        {
            unk30 = texture;
        }
        virtual ~ScaleformCommandSubstituteTexture();
        virtual int vf04();

        String_82230110 unk14; // Texture name
        unsigned int unk30;
    };
};

#endif
