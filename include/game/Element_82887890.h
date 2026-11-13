#ifndef GAME_ELEMENT_82887890_H
#define GAME_ELEMENT_82887890_H

// Placeholder for the 8-byte entry type of a std::set whose range erase is
// func_82887890 and whose single erase is func_828872C8 (the node's colour byte
// at 0x14 gives the size; func_82885698 reads a key and a pointer from it).
// Named after an address until the real type is known; the name appears in the
// mangled symbols.

struct Element_82887890 {
    unsigned key;
    void *value;
};

inline bool operator<(const Element_82887890 &a, const Element_82887890 &b)
{
    return a.key < b.key;
}

#endif
