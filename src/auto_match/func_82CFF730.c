const char *fn_82CFF730(unsigned int type)
{
    switch (type) {
    case 0:
        return "Object ";
    case 1:
        return "Normal ";
    case 2:
        return "Alloc'd";
    case 3:
        return "Array  ";
    case 4:
        return "Other  ";
    default:
        return "Unknown";
    }
}
