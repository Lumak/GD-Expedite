const ItemLvlName incorruptTable[6]
{
	5, "records/items/lootaffixes/prefix/b_ar018_je.dbr",
	36, "records/items/lootaffixes/prefix/b_ar018_je_b.dbr",
	50, "records/items/lootaffixes/prefix/b_ar018_je_c.dbr",
	66, "records/items/lootaffixes/prefix/b_ar018_je_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar018_je_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar018_je_f.dbr",
};

const ItemAffix prefixIncorruptable
{
	//incorruptable - all jewelry, belts
	AllJewelry | Belt, 6, incorruptTable
};

const ItemLvlName unyieldTable[6]
{
	5, "records/items/lootaffixes/prefix/b_ar020_je.dbr",
	36, "records/items/lootaffixes/prefix/b_ar020_je_b.dbr",
	50, "records/items/lootaffixes/prefix/b_ar020_je_c.dbr",
	66, "records/items/lootaffixes/prefix/b_ar020_je_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar020_je_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar020_je_f.dbr",
};

const ItemAffix prefixUnyeilding
{
	//unyielindg - all jewelry, belts
	AllJewelry | Belt, 6, unyieldTable
};
const ItemLvlName lichTable[6]
{
	//lich's
	5, "records/items/lootaffixes/prefix/b_ar004_ri.dbr",
	36, "records/items/lootaffixes/prefix/b_ar004_ri_b.dbr",
	52, "records/items/lootaffixes/prefix/b_ar004_ri_c.dbr",
	68, "records/items/lootaffixes/prefix/b_ar004_ri_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar004_ri_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar004_ri_f.dbr",
};

const ItemAffix prefixLich
{
	Ring, 6, lichTable
};

ItemLvlName tempestTable[6]
{
	//tempest - all armor, all jewelry
	14, "records/items/lootaffixes/prefix/b_ar009_ar.dbr",
	36, "records/items/lootaffixes/prefix/b_ar009_ar_b.dbr",
	51, "records/items/lootaffixes/prefix/b_ar009_ar_c.dbr",
	67, "records/items/lootaffixes/prefix/b_ar009_ar_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar009_ar_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar009_ar_f.dbr",
};
const ItemAffix prefixTempest
{
	AllJewelry | Belt | AllArmorNoBelt, 6, tempestTable
};

const ItemLvlName aggrTable[1]
{
	0, "records/items/lootaffixes/prefix/aa009b_oamod_01.dbr",
};

const ItemAffix prefixAggressive
{
	//aggressive - all jewelry, belts, no lvl limit
	AllJewelry | Belt, 1, aggrTable
};

//devastating - all armor, all jewelry
const ItemLvlName devastatingTable[6]
{
	22, "records/items/lootaffixes/prefix/b_ar007_ar.dbr",
	46, "records/items/lootaffixes/prefix/b_ar007_ar_b.dbr",
	60, "records/items/lootaffixes/prefix/b_ar007_ar_c.dbr",
	74, "records/items/lootaffixes/prefix/b_ar007_ar_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar007_ar_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar007_ar_f.dbr",
};

const ItemAffix prefixDevastating
{
	AllJewelry | Belt | AllArmorNoBelt, 6, devastatingTable
};

//harmonious- all jewelry, belts
const ItemLvlName harmoniousTable[6]
{
	5, "records/items/lootaffixes/prefix/b_ar005_je.dbr",
	36, "records/items/lootaffixes/prefix/b_ar005_je_b.dbr",
	54, "records/items/lootaffixes/prefix/b_ar005_je_c.dbr",
	70, "records/items/lootaffixes/prefix/b_ar005_je_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar005_je_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar005_je_f.dbr",
};

const ItemAffix prefixHarmonious
{
	AllJewelry | Belt, 6, harmoniousTable
};

//menacing - all armor, all jewelry, belts
const ItemLvlName menacingTable[6]
{
	5, "records/items/lootaffixes/prefix/b_ar022_ar.dbr",
	36, "records/items/lootaffixes/prefix/b_ar022_ar_b.dbr",
	52, "records/items/lootaffixes/prefix/b_ar022_ar_c.dbr",
	68, "records/items/lootaffixes/prefix/b_ar022_ar_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar022_ar_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar022_ar_f.dbr",
};

const ItemAffix prefixMenacing
{
	AllJewelry | Belt | AllArmorNoBelt, 6, menacingTable
};

//light bringer - all jewelry, belts
const ItemLvlName lightbringerTable[6]
{
	5, "records/items/lootaffixes/prefix/b_ar019_je.dbr",
	25, "records/items/lootaffixes/prefix/b_ar019_je_b.dbr",
	50, "records/items/lootaffixes/prefix/b_ar019_je_c.dbr",
	66, "records/items/lootaffixes/prefix/b_ar019_je_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar019_je_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar019_je_f.dbr",
};

const ItemAffix prefixLightBringer
{
	AllJewelry | Belt, 6, lightbringerTable
};

//general's - all jewelry, belts
const ItemLvlName generalsTable[6]
{
	5, "records/items/lootaffixes/prefix/b_ar029_je.dbr",
	36, "records/items/lootaffixes/prefix/b_ar029_je_b.dbr",
	50, "records/items/lootaffixes/prefix/b_ar029_je_c.dbr",
	66, "records/items/lootaffixes/prefix/b_ar029_je_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar029_je_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar029_je_f.dbr",
};

const ItemAffix prefixGenerals
{
	AllJewelry | Belt, 6, generalsTable
};

//impervious pierce poison - all jewelry, belts, shoulders, chest **note shield is also listed but not included
const ItemLvlName imperviousPiercePoisonTable[6]
{
	5, "records/items/lootaffixes/prefix/ad009b_res_piercepoison_01.dbr",
	10, "records/items/lootaffixes/prefix/ad009b_res_piercepoison_02.dbr",
	21, "records/items/lootaffixes/prefix/ad009b_res_piercepoison_03.dbr",
	50, "records/items/lootaffixes/prefix/ad009b_res_piercepoison_04.dbr",
	70, "records/items/lootaffixes/prefix/ad009b_res_piercepoison_05.dbr",
	85, "records/items/lootaffixes/prefix/ad009b_res_piercepoison_06.dbr",
};

const ItemAffix prefixImperviousPiercePoison
{
	AllJewelry | Belt | Jacket | Shoulder, 6, imperviousPiercePoisonTable
};

//consecrated - all armor, all jewelry, belts
const ItemLvlName consecratedTable[6]
{
	5, "records/items/lootaffixes/prefix/b_ar015_ar.dbr",
	36, "records/items/lootaffixes/prefix/b_ar015_ar_b.dbr",
	50, "records/items/lootaffixes/prefix/b_ar015_ar_c.dbr",
	66, "records/items/lootaffixes/prefix/b_ar015_ar_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar015_ar_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar015_ar_f.dbr",
};

const ItemAffix prefixConsecrated
{
	AllJewelry | Belt | AllArmorNoBelt, 6, consecratedTable
};

//overseer - helm
const ItemLvlName overseerTable[6]
{
	22, "records/items/lootaffixes/prefix/b_ar012_he.dbr",
	48, "records/items/lootaffixes/prefix/b_ar012_he_b.dbr",
	60, "records/items/lootaffixes/prefix/b_ar012_he_c.dbr",
	74, "records/items/lootaffixes/prefix/b_ar012_he_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar012_he_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar012_he_f.dbr",
};

const ItemAffix prefixOverseer
{
	Helm, 6, overseerTable
};

//celestial - helm
const ItemLvlName celestialTable[6]
{
	5, "records/items/lootaffixes/prefix/b_ar001_he.dbr",
	38, "records/items/lootaffixes/prefix/b_ar001_he_b.dbr",
	55, "records/items/lootaffixes/prefix/b_ar001_he_c.dbr",
	70, "records/items/lootaffixes/prefix/b_ar001_he_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar001_he_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar001_he_f.dbr",
};

const ItemAffix prefixCelestial
{
	Helm, 6, celestialTable
};

//stonehide - all armor no belt
const ItemLvlName stonehideTable[6]
{
	5, "records/items/lootaffixes/prefix/b_ar028_ar.dbr",
	36, "records/items/lootaffixes/prefix/b_ar028_ar_b.dbr",
	50, "records/items/lootaffixes/prefix/b_ar028_ar_c.dbr",
	66, "records/items/lootaffixes/prefix/b_ar028_ar_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar028_ar_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar028_ar_f.dbr",
};

const ItemAffix prefixStonehide
{
	AllArmorNoBelt, 6, stonehideTable
};

//trickster's - all armor no belt, medal
//changing the letter at the end seems to make no difference, a02, b02, and c02 all come out as L65
const ItemLvlName TrickstersTable[3]
{
	42, "records/items/lootaffixes/prefix/b_class019_a02.dbr",
	65, "records/items/lootaffixes/prefix/b_class019_a02.dbr",
	90, "records/items/lootaffixes/prefix/b_class019_a02.dbr",
};

const ItemAffix prefixTricksters
{
	AllArmorNoBelt | Medal, 3, TrickstersTable
};

//thunderstruck - all armor, all jewelry
const ItemLvlName ThunderstruckTable[6]
{
	5, "records/items/lootaffixes/prefix/b_ar031_ar.dbr",
	36, "records/items/lootaffixes/prefix/b_ar031_ar_b.dbr",
	52, "records/items/lootaffixes/prefix/b_ar031_ar_c.dbr",
	68, "records/items/lootaffixes/prefix/b_ar031_ar_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar031_ar_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar031_ar_f.dbr",
};

const ItemAffix prefixThunderstruck
{
	AllJewelry | AllArmorNoBelt | Belt, 6, ThunderstruckTable
};

//blighted - all armor, all jewelry
const ItemLvlName BlightedTable[6]
{
	22, "records/items/lootaffixes/prefix/b_ar017_ar.dbr",
	44, "records/items/lootaffixes/prefix/b_ar017_ar_b.dbr",
	59, "records/items/lootaffixes/prefix/b_ar017_ar_c.dbr",
	74, "records/items/lootaffixes/prefix/b_ar017_ar_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar017_ar_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar017_ar_f.dbr",
};

const ItemAffix prefixBlighted
{
	AllJewelry | AllArmorNoBelt | Belt, 6, BlightedTable
};

//bloodletter's - all armor, all jewelry
const ItemLvlName BloodlettersTable[6]
{
	5, "records/items/lootaffixes/prefix/b_ar027_ar.dbr",
	36, "records/items/lootaffixes/prefix/b_ar027_ar_b.dbr",
	52, "records/items/lootaffixes/prefix/b_ar027_ar_c.dbr",
	68, "records/items/lootaffixes/prefix/b_ar027_ar_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar027_ar_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar027_ar_f.dbr",
};

const ItemAffix prefixBloodletters
{
	AllJewelry | AllArmorNoBelt | Belt, 6, BloodlettersTable
};

//ancient - all armor no belt
const ItemLvlName AncientTable[6]
{
	5, "records/items/lootaffixes/prefix/b_ar008_ar.dbr",
	36, "records/items/lootaffixes/prefix/b_ar008_ar_b.dbr",
	52, "records/items/lootaffixes/prefix/b_ar008_ar_c.dbr",
	68, "records/items/lootaffixes/prefix/b_ar008_ar_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar008_ar_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar008_ar_f.dbr",
};

const ItemAffix prefixAncient
{
	AllArmorNoBelt, 6, AncientTable
};

//flamewall - shield
const ItemLvlName FlamewallTable[6]
{
	5, "records/items/lootaffixes/prefix/b_sh012.dbr",
	36, "records/items/lootaffixes/prefix/b_sh012_b.dbr",
	52, "records/items/lootaffixes/prefix/b_sh012_c.dbr",
	68, "records/items/lootaffixes/prefix/b_sh012_d.dbr",
	82, "records/items/lootaffixes/prefix/b_sh012_e.dbr",
	92, "records/items/lootaffixes/prefix/b_sh012_f.dbr",
};

const ItemAffix prefixFlamewall
{
	Shield, 6, FlamewallTable
};

//stonehide - shiedl
const ItemLvlName ShieldStonehide[6]
{
	5, "records/items/lootaffixes/prefix/b_sh016.dbr",
	36, "records/items/lootaffixes/prefix/b_sh016_b.dbr",
	52, "records/items/lootaffixes/prefix/b_sh016_c.dbr",
	68, "records/items/lootaffixes/prefix/b_sh016_d.dbr",
	82, "records/items/lootaffixes/prefix/b_sh016_e.dbr",
	92, "records/items/lootaffixes/prefix/b_sh016_f.dbr",
};

const ItemAffix prefixShieldStonehide
{
	Shield, 6, ShieldStonehide
};

//[18256]  p=records/items/lootaffixes/prefix/b_sh107_d.dbr
//stonefaced - shield
const ItemLvlName StonefacedTable[6]
{
	5, "records/items/lootaffixes/prefix/b_sh107.dbr",
	36, "records/items/lootaffixes/prefix/b_sh107_b.dbr",
	50, "records/items/lootaffixes/prefix/b_sh107_c.dbr",
	68, "records/items/lootaffixes/prefix/b_sh107_d.dbr",
	82, "records/items/lootaffixes/prefix/b_sh107_e.dbr",
	92, "records/items/lootaffixes/prefix/b_sh107_f.dbr",
};

const ItemAffix prefixStonefaced
{
	Shield, 6, StonefacedTable
};

//keeper's - shield
const ItemLvlName KeepersTable[6]
{
	5, "records/items/lootaffixes/prefix/b_sh002.dbr",
	36, "records/items/lootaffixes/prefix/b_sh002_b.dbr",
	50, "records/items/lootaffixes/prefix/b_sh002_c.dbr",
	66, "records/items/lootaffixes/prefix/b_sh002_d.dbr",
	82, "records/items/lootaffixes/prefix/b_sh002_e.dbr",
	92, "records/items/lootaffixes/prefix/b_sh002_f.dbr",
};

const ItemAffix prefixKeepers
{
	Shield, 6, KeepersTable
};

//=====================================
// list container
//=====================================
const std::vector<const ItemAffix*> prefixList =
{ 
	&prefixIncorruptable, 
	&prefixUnyeilding, 
	&prefixLich,
	&prefixTempest, 
	&prefixAggressive, 
	&prefixDevastating, 
	&prefixHarmonious, 
	&prefixMenacing,
    &prefixLightBringer,
    &prefixGenerals,
    //&prefixImperviousPiercePoison,
    &prefixConsecrated,
    &prefixOverseer,
    //&prefixCelestial,
    &prefixStonehide,
	&prefixThunderstruck,
	&prefixBlighted,
	&prefixBloodletters,
	&prefixAncient,
	&prefixFlamewall,
	&prefixShieldStonehide,
	&prefixStonefaced,
	&prefixKeepers
};

