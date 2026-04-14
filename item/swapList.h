struct ItemNumber
{
    uint32_t id;
    std::string name;
    bool clrAffix;
};
const std::vector<ItemNumber> itemSwapList =
{
    //************************
    //base game: hard-to-drop, inaccessible early-on, or non-craftable gear
    { 100, "records/items/gearaccessories/waist/b201a_waist.dbr", false}, //L20 oathkeeper belt
    { 101, "records/items/gearaccessories/waist/b202a_waist.dbr", false}, //L20 nightblade belt

    { 200, "records/items/gearaccessories/rings/d211_ring.dbr", true }, //bysmiel's auth
    { 201, "records/items/gearaccessories/rings/d212_ring.dbr", true }, //bysmiel's influence
    { 202, "records/items/gearaccessories/necklaces/d218_necklace.dbr", true }, //bysmiel's iris
    { 203, "records/items/upgraded/gearaccessories/necklaces/d005_necklace.dbr", true }, //bysmiel's mark
    
    { 210, "records/items/upgraded/gearaccessories/necklaces/d005_necklace.dbr", true }, //peerless eye of beronath

    { 220, "records/items/gearweapons/blunt1h/d218_blunt.dbr", true }, //totally normal guardian L50
    { 221, "records/items/gearweapons/blunt1h/d219_blunt.dbr", true }, //totally normal guardian L75
    { 222, "records/items/gearweapons/blunt1h/d221_blunt.dbr", true }, //totally normal guardian L94

    { 230, "records/items/upgraded/gearaccessories/rings/d015_ring.dbr", true }, //alkamos' touch of dread (ring1)
    { 231, "records/items/upgraded/gearaccessories/rings/d016_ring.dbr", true }, //alkamos' touch of anguish (ring2)

    { 240, "records/items/gearhead/d229_head.dbr", true }, //mask of ember's calling
    { 241, "records/items/upgraded/gearweapons/blunt1h/d006_blunt.dbr", true }, //dawnbreaker's sledge
    { 242, "records/items/upgraded/gearhead/c023_head.dbr", true }, //dawnguard helm
    { 243, "records/items/upgraded/geartorso/d016_torso.dbr", true }, //belgothian's torso armor (pierce/cold dmg gear)

    //************************
    //league gear doesn't drop from bosses in off season (bug or by design?)
    { 501, "grimleague/items/gearweapons/caster/b01_scepter_outlaweldritch_lightningc.dbr", false}, //scepter of the realm
    { 502, "grimleague/items/gearweapons/blunt1h/b04_hagraa.dbr", false}, //hagra mace
    { 503, "grimleague/items/lootsets/d008_medal.dbr", true}, //mark of lich crusader
    { 504, "grimleague/items/lootsets/d008_necklace.dbr", true}, //necklace of lich crusader
    { 505, "grimleague/items/lootsets/d008_sword2h.dbr", true}, //conviction of lich crusader
    
    //************************
    //misc. stuff for testing
    { 900, "records/items/gearaccessories/medals/b006a_medal.dbr", false}, //Ilgorr's Eternal Vigil (Nightblade pneumatic burst)
    { 901, "records/items/gearaccessories/necklaces/b003a_necklace.dbr", false}, //Ellena's necklace (+1 skill nightblade)
    { 902, "records/items/gearaccessories/medals/b101a_medal.dbr", false}, //Basilisk Crest (Inquisitor word of renewal)

};
