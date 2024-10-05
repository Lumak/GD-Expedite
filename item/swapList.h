//alkamos ring 1 & 2
const ItemData alkamosRing1[1] =
{
	{ Ring, "records/items/upgraded/gearaccessories/rings/d015_ring.dbr" }
};
const ItemData alkamosRing2[1] =
{
	{ Ring, "records/items/upgraded/gearaccessories/rings/d016_ring.dbr" }
};

//alkamos ring 1 id = 15, pass in args: -p 15
const ItemArray alkamosSet1 =
{
	15, 1, alkamosRing1
};

//alkamos ring 2 id = 16, pass in args: -p 16
const ItemArray alkamosSet2 =
{
	16, 1, alkamosRing2
};

//=====================================
// list container
//=====================================
const std::vector<const ItemArray*> swapList =
{
	&alkamosSet1,
	&alkamosSet2
};
