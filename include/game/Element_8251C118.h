// Value type of a std::map<std::string, Mapped_8251C118> of the game (the map
// whose operator[] with the key "ScriptID" is func_8251B5E8.cpp): a string key,
// then a shared pointer and a flag. The Matching units of this map's tree
// (func_8251C118.cpp, func_8251BFC0.cpp) named the tree
// std::set<Element_8251C118> before the map was recognised, and symbols.txt
// carries that name, so the pair keeps the placeholder name Element_8251C118
// and the tree stays a std::set of it, ordered by the key alone.
// Mapped_8251C118 and the pointee Object are placeholders too.

#ifndef GAME_ELEMENT_8251C118_H
#define GAME_ELEMENT_8251C118_H

#include <memory>
#include <set>
#include <string>
#include <utility>

struct Mapped_8251C118 {
    struct Object;
    std::tr1::shared_ptr<Object> object;
    bool flag;

    Mapped_8251C118() : flag(false) {}
    Mapped_8251C118(Mapped_8251C118 &&right) : object(std::move(right.object)), flag(right.flag) {}
};

struct Element_8251C118 : std::pair<const std::string, Mapped_8251C118> {
    typedef std::pair<const std::string, Mapped_8251C118> Pair;

    // What map::operator[] inserts for a new key.
    Element_8251C118(const std::string &key) : Pair(key, Mapped_8251C118()) {}
    Element_8251C118(Element_8251C118 &&right) : Pair(std::move(right)) {}
};

inline bool operator<(const Element_8251C118 &a, const Element_8251C118 &b)
{
    return a.first < b.first;
}

typedef std::set<Element_8251C118> Set_8251C118;

#endif
