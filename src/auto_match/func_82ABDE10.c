typedef struct Info_82ABDE10 { char pad[0x18]; const char *name; } Info_82ABDE10;
typedef struct Desc_82ABDE10 { char pad[0x14]; Info_82ABDE10 *info; } Desc_82ABDE10;
typedef struct Item_82ABDE10 { char pad[0xc]; Desc_82ABDE10 *desc; } Item_82ABDE10;
extern int strcmp(const char *, const char *);

int fn_82ABDE10(Item_82ABDE10 **a, Item_82ABDE10 **b)
{
  return strcmp((*a)->desc->info->name, (*b)->desc->info->name);
}
