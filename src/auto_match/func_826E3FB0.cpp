// Detects the format of a file from its first four bytes (and, for a file
// with no known signature, from a ".tga" extension), leaving the file
// position unchanged.
extern "C" {
char *strrchr(const char *string, int character);
int fn_8268AE50(const char *left, const char *right);
}

class File_826E3FB0
{
  public:
    virtual void vf00();
    virtual const char *GetFilePath();
    virtual void vf08();
    virtual void vf0C();
    virtual int Tell();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1C();
    virtual void vf20();
    virtual void vf24();
    virtual int Read(unsigned char *buffer, int size);
    virtual void vf2C();
    virtual void vf30();
    virtual void vf34();
    virtual int Seek(int offset, int origin);
};

enum FileFormat_826E3FB0 {
    FORMAT_NONE = 0,
    FORMAT_UNKNOWN = 1,
    FORMAT_SWF = 2,
    FORMAT_GFX = 3,
    FORMAT_JPEG = 10,
    FORMAT_PNG = 11,
    FORMAT_GIF = 12,
    FORMAT_TGA = 13,
    FORMAT_DDS = 14
};

extern "C" int fn_826E3FB0(File_826E3FB0 *file)
{
    if (file == 0)
        return FORMAT_NONE;

    int position = file->Tell();
    int format = FORMAT_UNKNOWN;
    unsigned char signature[4] = {0, 0, 0, 0};

    if (file->Read(signature, 4) <= 0)
        return FORMAT_UNKNOWN;

    switch (signature[0]) {
    case 0x43:
    case 0x46:
        if (signature[1] == 0x57 && signature[2] == 0x53)
            format = FORMAT_SWF;
        else if (signature[1] == 0x46 && signature[2] == 0x58)
            format = FORMAT_GFX;
        break;
    case 0xff:
        if (signature[1] == 0xd8)
            format = FORMAT_JPEG;
        break;
    case 0x89:
        if (signature[1] == 'P' && signature[2] == 'N' && signature[3] == 'G')
            format = FORMAT_PNG;
        break;
    case 'G':
        if (signature[1] == 'I' && signature[2] == 'F' && signature[3] == '8')
            format = FORMAT_GIF;
        if (signature[1] == 0x46 && signature[2] == 0x58)
            format = FORMAT_GFX;
        break;
    case 'D':
        if (signature[1] == 'D' && signature[2] == 'S')
            format = FORMAT_DDS;
        break;
    }
    file->Seek(position, 0);

    if (format == FORMAT_UNKNOWN) {
        const char *path = file->GetFilePath();
        if (path != 0) {
            const char *extension = strrchr(path, '.');
            if (extension != 0 && fn_8268AE50(extension, ".tga") == 0)
                format = FORMAT_TGA;
        }
    }
    return format;
}
