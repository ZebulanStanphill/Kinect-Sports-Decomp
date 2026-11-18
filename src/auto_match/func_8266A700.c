typedef unsigned short wchar_t;

struct Vector_8266A700 {
    void *data;
    void *end;
    void *capacity;
};

struct Settings_8266A700 {
    int unused;
    struct Vector_8266A700 languages;
};

struct Culture_8266A700 {
    char pad0[0x3c];
    char parent[0x1c]; /* 0x3c: std::wstring */
};

extern struct Settings_8266A700 lbl_831E7AF4;
extern const wchar_t *lbl_83153FD8;
extern void fn_8266C340(const wchar_t *format, ...);
extern int fn_8266A628(const wchar_t *language);
extern struct Culture_8266A700 *fn_8265ED50(const wchar_t *language);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_8265D7D0(void *self, const wchar_t *language);
extern void fn_8265F608(struct Vector_8266A700 *self, void **element);
extern unsigned int fn_8265DED8(void *string);
extern int fn_8265F598(void *string, const wchar_t *text);
extern const wchar_t *fn_8265F570(void *string);

void fn_8266A700(const wchar_t *language)
{
    struct Culture_8266A700 *culture;

    if (language == 0) {
        fn_8266C340(L"Assert failed. File: %s. Line: %d. Condition: %s", L".\\XLipSettings.cpp", 0x140,
                    L"pcszLanguage");
    }
    if (fn_8266A628(language) != 0) {
        return;
    }
    culture = fn_8265ED50(language);
    if (culture != 0) {
        void *languageObject;
        void *storage;
        void *object;

        storage = fn_8265C9E0(0x1c);
        if (storage != 0) {
            object = fn_8265D7D0(storage, language);
        } else {
            object = 0;
        }
        languageObject = object;
        fn_8265F608(&lbl_831E7AF4.languages, &languageObject);
        if (fn_8265DED8(culture->parent) != 0 && fn_8265F598(culture->parent, lbl_83153FD8) != 0) {
            fn_8266A700(fn_8265F570(culture->parent));
        }
    }
}
