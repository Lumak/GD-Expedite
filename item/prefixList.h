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
    GeneratStat, AllJewelry | Belt, 6, incorruptTable
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
    GeneratStat, AllJewelry | Belt, 6, unyieldTable
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
    GeneratStat, Ring, 6, lichTable
};

//tempest - all armor, all jewelry
ItemLvlName tempestTable[6]
{
	14, "records/items/lootaffixes/prefix/b_ar009_ar.dbr",
	36, "records/items/lootaffixes/prefix/b_ar009_ar_b.dbr",
	51, "records/items/lootaffixes/prefix/b_ar009_ar_c.dbr",
	67, "records/items/lootaffixes/prefix/b_ar009_ar_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar009_ar_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar009_ar_f.dbr",
};
const ItemAffix prefixTempest
{
    ElementalDamage, AllJewelry | Belt | AllArmorNoBelt, 6, tempestTable
};

//resonant - elem dmg, spirit, offen, energy absorp, elem res
//all armor no belt
//[8780]  p=records/items/lootaffixes/prefix/b_ar021_ar_f.dbr
ItemLvlName Resonant[6]
{
    5, "records/items/lootaffixes/prefix/b_ar021_ar.dbr",
    36, "records/items/lootaffixes/prefix/b_ar021_ar_b.dbr",
    50, "records/items/lootaffixes/prefix/b_ar021_ar_c.dbr",
    70, "records/items/lootaffixes/prefix/b_ar021_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar021_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar021_ar_f.dbr",
};
const ItemAffix prefixResonant
{
    ElementalDamage, AllArmorNoBelt, 6, Resonant
};

//aggressive - all jewelry, belts, no lvl limit
const ItemLvlName aggrTable[1]
{
	0, "records/items/lootaffixes/prefix/aa009b_oamod_01.dbr",
};

const ItemAffix prefixAggressive
{
    OffenseType, AllJewelry | Belt, 1, aggrTable
};

//aggressive - all armor no belt, shield
//[16544]  p=records/items/lootaffixes/prefix/aa009a_oamod_02.dbr
const ItemLvlName aggressiveArmor[1]
{
    0, "records/items/lootaffixes/prefix/aa009a_oamod_02.dbr",
};

const ItemAffix prefixAggressiveArmor
{
    OffenseType, AllArmorNoBelt, 1, aggressiveArmor
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
	PhysicalDamage | FireDamage, AllJewelry | Belt | AllArmorNoBelt, 6, devastatingTable
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
	GeneratStat, AllJewelry | Belt, 6, harmoniousTable
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
    GeneratStat, AllJewelry | Belt | AllArmorNoBelt, 6, menacingTable
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
	ElementalDamage, AllJewelry | Belt, 6, lightbringerTable
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
    GeneratStat, AllJewelry | Belt, 6, generalsTable
};

//stonefaced - all jewelry, belts
const ItemLvlName stonefacedJewelryTable[6]
{
    5, "records/items/lootaffixes/prefix/b_ar101_ar_a.dbr",
    36, "records/items/lootaffixes/prefix/b_ar101_ar_b.dbr",
    50, "records/items/lootaffixes/prefix/b_ar101_ar_c.dbr",
    68, "records/items/lootaffixes/prefix/b_ar101_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar101_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar101_ar_f.dbr",
};

const ItemAffix prefixStonefacedJewelry
{
    GeneratStat, AllJewelry | Belt, 6, stonefacedJewelryTable
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
    GeneratStat, AllJewelry | Belt | Jacket | Shoulder, 6, imperviousPiercePoisonTable
};

//consecrated - all armor, all jewelry, belts
const ItemLvlName consecratedTable[6]
{
	5, "records/items/lootaffixes/prefix/b_ar015_ar.dbr",
	36, "records/items/lootaffixes/prefix/b_ar015_ar_b.dbr",
	52, "records/items/lootaffixes/prefix/b_ar015_ar_c.dbr",
	68, "records/items/lootaffixes/prefix/b_ar015_ar_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar015_ar_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar015_ar_f.dbr",
};

const ItemAffix prefixConsecrated
{
    GeneratStat, AllJewelry | Belt | AllArmorNoBelt, 6, consecratedTable
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
    GeneratStat, Helm, 6, overseerTable
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
    GeneratStat, Helm, 6, celestialTable
};

//stonehide - all armor no belt
const ItemLvlName stonehideTable[6]
{
	5, "records/items/lootaffixes/prefix/b_ar028_ar.dbr",
	36, "records/items/lootaffixes/prefix/b_ar028_ar_b.dbr",
	51, "records/items/lootaffixes/prefix/b_ar028_ar_c.dbr",
	67, "records/items/lootaffixes/prefix/b_ar028_ar_d.dbr",
	82, "records/items/lootaffixes/prefix/b_ar028_ar_e.dbr",
	92, "records/items/lootaffixes/prefix/b_ar028_ar_f.dbr",
};

const ItemAffix prefixStonehide
{
    GeneratStat, AllArmorNoBelt, 6, stonehideTable
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
	LightningDamage, AllJewelry | AllArmorNoBelt | Belt, 6, ThunderstruckTable
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
	PoisAcidDamage, AllJewelry | AllArmorNoBelt | Belt, 6, BlightedTable
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
	BleedDamage, AllJewelry | AllArmorNoBelt | Belt, 6, BloodlettersTable
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
	GeneratStat, AllArmorNoBelt, 6, AncientTable
};

//runecarved - all armor, all jewelry, belt
const ItemLvlName RuneCarvedTable[6]
{
    5, "records/items/lootaffixes/prefix/b_ar102_ar_a.dbr",
    36, "records/items/lootaffixes/prefix/b_ar102_ar_b.dbr",
    50, "records/items/lootaffixes/prefix/b_ar102_ar_c.dbr",
    68, "records/items/lootaffixes/prefix/b_ar102_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar102_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar102_ar_f.dbr",
};

const ItemAffix prefixRuneCarved
{
    ElementalDamage, AllArmorNoBelt | AllJewelry | Belt, 6, RuneCarvedTable
};

//flamewall - shield
const ItemLvlName FlamewallTable[6]
{
	5, "records/items/lootaffixes/prefix/b_sh012_a.dbr",
	36, "records/items/lootaffixes/prefix/b_sh012_b.dbr",
	52, "records/items/lootaffixes/prefix/b_sh012_c.dbr",
	68, "records/items/lootaffixes/prefix/b_sh012_d.dbr",
	82, "records/items/lootaffixes/prefix/b_sh012_e.dbr",
	92, "records/items/lootaffixes/prefix/b_sh012_f.dbr",
};

const ItemAffix prefixFlamewall
{
	FireDamage, Shield, 6, FlamewallTable
};

//stonehide - shiedl
const ItemLvlName ShieldStonehide[6]
{
	5, "records/items/lootaffixes/prefix/b_sh016_a.dbr",
	36, "records/items/lootaffixes/prefix/b_sh016_b.dbr",
	52, "records/items/lootaffixes/prefix/b_sh016_c.dbr",
	68, "records/items/lootaffixes/prefix/b_sh016_d.dbr",
	82, "records/items/lootaffixes/prefix/b_sh016_e.dbr",
	92, "records/items/lootaffixes/prefix/b_sh016_f.dbr",
};

const ItemAffix prefixShieldStonehide
{
	GeneratStat, Shield, 6, ShieldStonehide
};

//stonefaced - shield
const ItemLvlName StonefacedShieldTable[6]
{
	5, "records/items/lootaffixes/prefix/b_sh107_a.dbr",
	36, "records/items/lootaffixes/prefix/b_sh107_b.dbr",
	50, "records/items/lootaffixes/prefix/b_sh107_c.dbr",
	68, "records/items/lootaffixes/prefix/b_sh107_d.dbr",
	82, "records/items/lootaffixes/prefix/b_sh107_e.dbr",
	92, "records/items/lootaffixes/prefix/b_sh107_f.dbr",
};

const ItemAffix prefixStonefacedShield
{
	GeneratStat, Shield, 6, StonefacedShieldTable
};

//keeper's - shield
const ItemLvlName KeepersTable[6]
{
	5, "records/items/lootaffixes/prefix/b_sh002_a.dbr",
	36, "records/items/lootaffixes/prefix/b_sh002_b.dbr",
	50, "records/items/lootaffixes/prefix/b_sh002_c.dbr",
	66, "records/items/lootaffixes/prefix/b_sh002_d.dbr",
	82, "records/items/lootaffixes/prefix/b_sh002_e.dbr",
	92, "records/items/lootaffixes/prefix/b_sh002_f.dbr",
};

const ItemAffix prefixKeepers
{
	GeneratStat, Shield, 6, KeepersTable
};

const ItemLvlName EldritchTable[6]
{
    5, "records/items/lootaffixes/prefix/b_sh017_a.dbr",
    36, "records/items/lootaffixes/prefix/b_sh017_b.dbr",
    52, "records/items/lootaffixes/prefix/b_sh017_c.dbr",
    70, "records/items/lootaffixes/prefix/b_sh017_d.dbr",
    82, "records/items/lootaffixes/prefix/b_sh017_e.dbr",
    92, "records/items/lootaffixes/prefix/b_sh017_f.dbr",
};

const ItemAffix prefixEldritch
{
    VitalityDamage, Shield, 6, EldritchTable
};

//overlord's - +2 aegis of menhir, %phys dmg, 1176 phy retal, 7% phys res
//shields
//[6776]  p=records/items/lootaffixes/prefix/b_sh005_f.dbr
const ItemLvlName Overlords[6]
{
    5, "records/items/lootaffixes/prefix/b_sh005_a.dbr",
    36, "records/items/lootaffixes/prefix/b_sh005_b.dbr",
    52, "records/items/lootaffixes/prefix/b_sh005_c.dbr",
    68, "records/items/lootaffixes/prefix/b_sh005_d.dbr",
    82, "records/items/lootaffixes/prefix/b_sh005_e.dbr",
    92, "records/items/lootaffixes/prefix/b_sh005_f.dbr",
};

const ItemAffix prefixOverlords
{
    PhysicalDamage | RetaliationType, Shield, 6, Overlords
};
//glacial
//shields
//[25436]  p=records/items/lootaffixes/prefix/b_sh013_f.dbr
const ItemLvlName GlacialShield[6]
{
    5, "records/items/lootaffixes/prefix/b_sh013_a.dbr",
    36, "records/items/lootaffixes/prefix/b_sh013_b.dbr",
    52, "records/items/lootaffixes/prefix/b_sh013_c.dbr",
    68, "records/items/lootaffixes/prefix/b_sh013_d.dbr",
    82, "records/items/lootaffixes/prefix/b_sh013_e.dbr",
    92, "records/items/lootaffixes/prefix/b_sh013_f.dbr",
};

const ItemAffix prefixGlacialShield
{
    ColdDamage, Shield, 6, GlacialShield
};

//supercharged
//shields
//[1988]  p=records/items/lootaffixes/prefix/b_sh003_f.dbr
const ItemLvlName SuperchargedShield[6]
{
    5, "records/items/lootaffixes/prefix/b_sh003_a.dbr",
    36, "records/items/lootaffixes/prefix/b_sh003_b.dbr",
    50, "records/items/lootaffixes/prefix/b_sh003_c.dbr",
    72, "records/items/lootaffixes/prefix/b_sh003_d.dbr",
    82, "records/items/lootaffixes/prefix/b_sh003_e.dbr",
    92, "records/items/lootaffixes/prefix/b_sh003_f.dbr",
};

const ItemAffix prefixSuperchargedShield
{
    AetherDamage, Shield, 6, SuperchargedShield
};

//vit resist
//records/items/lootaffixes/prefix/ad016a_res_life_04.dbr
const ItemLvlName PreservingTable[6]
{
    5, "records/items/lootaffixes/prefix/ad016a_res_life_01.dbr",
    18, "records/items/lootaffixes/prefix/ad016a_res_life_02.dbr",
    39, "records/items/lootaffixes/prefix/ad016a_res_life_03.dbr",
    55, "records/items/lootaffixes/prefix/ad016a_res_life_04.dbr",
    75, "records/items/lootaffixes/prefix/ad016a_res_life_05.dbr",
    90, "records/items/lootaffixes/prefix/ad016a_res_life_06.dbr",
};

const ItemAffix prefixPreserving
{
    GeneratStat, Helm | Gloves | Pants | Boots, 6, PreservingTable
};

//[17488]  p=records/items/lootaffixes/prefix/b_ar104_ar_f.dbr
const ItemLvlName Magestorm[6]
{
    5, "records/items/lootaffixes/prefix/b_ar104_ar_a.dbr",
    36, "records/items/lootaffixes/prefix/b_ar104_ar_b.dbr",
    50, "records/items/lootaffixes/prefix/b_ar104_ar_c.dbr",
    68, "records/items/lootaffixes/prefix/b_ar104_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar104_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar104_ar_f.dbr",
};

const ItemAffix prefixMagestorm
{
    LightningDamage | AetherDamage, AllJewelry | AllArmorNoBelt | Belt, 6, Magestorm
};

//demonic - vit/chaos dmg, off, vit/strun res
//all armor, all jewelry
//[3964]  p=records/items/lootaffixes/prefix/b_ar032_ar_f.dbr
const ItemLvlName Demonic[6]
{
    5, "records/items/lootaffixes/prefix/b_ar032_ar.dbr",
    36, "records/items/lootaffixes/prefix/b_ar032_ar_b.dbr",
    50, "records/items/lootaffixes/prefix/b_ar032_ar_c.dbr",
    68, "records/items/lootaffixes/prefix/b_ar032_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar032_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar032_ar_f.dbr",
};

const ItemAffix prefixDemonic
{
    VitalityDamage | ChaosDamage, AllJewelry | AllArmorNoBelt | Belt, 6, Demonic
};


//dread lord's - vit + %vit/aeth dmg, %attk converted to health, chaos res
//all jewelry, belt
//[12504]  p=records/items/lootaffixes/prefix/b_ar006_je_b.dbr
const ItemLvlName DreadLords[6]
{
    5, "records/items/lootaffixes/prefix/b_ar032_ar.dbr",
    36, "records/items/lootaffixes/prefix/b_ar006_je_b.dbr",
    53, "records/items/lootaffixes/prefix/b_ar006_je_c.dbr",
    70, "records/items/lootaffixes/prefix/b_ar006_je_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar006_je_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar006_je_f.dbr",
};

const ItemAffix prefixDreadLords
{
    VitalityDamage, AllJewelry | Belt, 6, DreadLords
};


//rampage - phy/bleed dmg, offen, poison/bleed res
//all armor no belt
//[17252]  p=records/items/lootaffixes/prefix/b_ar002_ar.dbr
const ItemLvlName Rampage[6]
{
    5, "records/items/lootaffixes/prefix/b_ar002_ar.dbr",
    34, "records/items/lootaffixes/prefix/b_ar002_ar_b.dbr",
    51, "records/items/lootaffixes/prefix/b_ar002_ar_c.dbr",
    67, "records/items/lootaffixes/prefix/b_ar002_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar002_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar002_ar_f.dbr",
};

const ItemAffix prefixRampage
{
    PhysicalDamage | BleedDamage, AllArmorNoBelt, 6, Rampage
};

//imposing - phy/it dmg, 6% phys, health, pois/vit res
//all jewelry, belt
//[4812]  p=records/items/lootaffixes/prefix/b_ar024_ar_f.dbr
const ItemLvlName Imposing[6]
{
    5, "records/items/lootaffixes/prefix/b_ar024_ar.dbr",
    36, "records/items/lootaffixes/prefix/b_ar024_ar_b.dbr",
    50, "records/items/lootaffixes/prefix/b_ar024_ar_c.dbr",
    66, "records/items/lootaffixes/prefix/b_ar024_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar024_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar024_ar_f.dbr",
};

const ItemAffix prefixImposing
{
    GeneratStat, AllJewelry | Belt, 6, Imposing
};

//stalwart - %def
//all jewelry, belt
//[18712]  p=records/items/lootaffixes/prefix/aa010b_damod_01.dbr
const ItemLvlName Stalwart[1]
{
    5, "records/items/lootaffixes/prefix/aa010b_damod_01.dbr",
};

const ItemAffix prefixStalwart
{
    DefenseType, AllJewelry | Belt, 1, Stalwart
};

//rimefrost - 
//all armor, all jewelry
//[24420]  p=records/items/lootaffixes/prefix/b_ar016_ar.dbr
const ItemLvlName RimeFrost[6]
{
    22, "records/items/lootaffixes/prefix/b_ar016_ar.dbr",
    48, "records/items/lootaffixes/prefix/b_ar016_ar_b.dbr",
    60, "records/items/lootaffixes/prefix/b_ar016_ar_c.dbr",
    74, "records/items/lootaffixes/prefix/b_ar016_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar016_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar016_ar_f.dbr",
};

const ItemAffix prefixRimeFrost
{
    ColdDamage, AllArmorNoBelt | AllJewelry | Belt, 6, RimeFrost
};

//wraithbound - +3 soul harvest, 10% health, 76 def, pet bonuses
//all jewelry, belt
//[18668]  p=records/items/lootaffixes/prefix/b_ar103_ar_a.dbr
const ItemLvlName WraithBoundJewel[6]
{
    5, "records/items/lootaffixes/prefix/b_ar103_ar_a.dbr",
    36, "records/items/lootaffixes/prefix/b_ar103_ar_b.dbr",
    50, "records/items/lootaffixes/prefix/b_ar103_ar_c.dbr",
    68, "records/items/lootaffixes/prefix/b_ar103_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar103_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar103_ar_f.dbr",
};

const ItemAffix prefixWraithBoundJewel
{
    GeneratStat, AllJewelry | Belt, 6, WraithBoundJewel
};

//taskmaster's - +3 mogdrogen's pact, %health, elem/bleed res, pet bonuses
//all armor no belt
//[18668]  p=records/items/lootaffixes/prefix/b_ar034_ar.dbr
const ItemLvlName Taskmasters[6]
{
    5, "records/items/lootaffixes/prefix/b_ar034_ar.dbr",
    36, "records/items/lootaffixes/prefix/b_ar034_ar_b.dbr",
    50, "records/items/lootaffixes/prefix/b_ar034_ar_c.dbr",
    68, "records/items/lootaffixes/prefix/b_ar034_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar034_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar034_ar_f.dbr",
};

const ItemAffix prefixTaskmasters
{
    PetType, AllArmorNoBelt, 6, Taskmasters
};

//maniacal - acid/poisn/chaos dmg, spirit, offen, bleed res
//all armor, all jewelry
//[8432]  p=records/items/lootaffixes/prefix/b_ar011_ar_b.dbr
const ItemLvlName Maniacal[6]
{
    18, "records/items/lootaffixes/prefix/b_ar011_ar.dbr",
    46, "records/items/lootaffixes/prefix/b_ar011_ar_b.dbr",
    60, "records/items/lootaffixes/prefix/b_ar011_ar_c.dbr",
    74, "records/items/lootaffixes/prefix/b_ar011_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar011_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar011_ar_f.dbr",
};

const ItemAffix prefixManiacal
{
    ChaosDamage | PoisAcidDamage, AllArmorNoBelt | AllJewelry | Belt, 6, Maniacal
};

//formidable - 51 phy, health, 5% def, 11% healing effect, elem res
//all armor no belt
//[11300]  p=records/items/lootaffixes/prefix/b_ar023_ar_f.dbr
//[17252]  p=records/items/lootaffixes/prefix/b_ar023_ar.dbr
const ItemLvlName Formidable[6]
{
    5, "records/items/lootaffixes/prefix/b_ar023_ar.dbr",
    36, "records/items/lootaffixes/prefix/b_ar023_ar_b.dbr",
    52, "records/items/lootaffixes/prefix/b_ar023_ar_c.dbr",
    70, "records/items/lootaffixes/prefix/b_ar023_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar023_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar023_ar_f.dbr",
};

const ItemAffix prefixFormidable
{
    GeneratStat, AllArmorNoBelt, 6, Formidable
};

//merciless - pierce/bleed dmg, offen, elem resist
//all armor no belt
//[23560]  p=records/items/lootaffixes/prefix/b_ar025_ar_f.dbr
const ItemLvlName Merciless[6]
{
    5, "records/items/lootaffixes/prefix/b_ar025_ar.dbr",
    36, "records/items/lootaffixes/prefix/b_ar025_ar_b.dbr",
    54, "records/items/lootaffixes/prefix/b_ar025_ar_c.dbr",
    70, "records/items/lootaffixes/prefix/b_ar025_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar025_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar025_ar_f.dbr",
};

const ItemAffix prefixMerciless
{
    PierceDamage | BleedDamage, AllArmorNoBelt, 6, Merciless
};

//cutthroat's - pierce dmg, 6% cunning, pierce res
//all jewelry, belts
//[18064]  p=records/items/lootaffixes/prefix/b_ar026_ar_c.dbr
const ItemLvlName Cutthroats[6]
{
    5, "records/items/lootaffixes/prefix/b_ar026_ar.dbr",
    36, "records/items/lootaffixes/prefix/b_ar026_ar_b.dbr",
    54, "records/items/lootaffixes/prefix/b_ar026_ar_c.dbr",
    70, "records/items/lootaffixes/prefix/b_ar026_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar026_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar026_ar_f.dbr",
};

const ItemAffix prefixCutthroats
{
    PierceDamage, AllJewelry | Belt , 6, Cutthroats
};


//cleric's - %dmg to undead, %health, defense, pierce/stun res
//all armor no belt
//[15848]  p=records/items/lootaffixes/prefix/b_ar013_ar_d.dbr
const ItemLvlName Clerics[6]
{
    5, "records/items/lootaffixes/prefix/b_ar013_ar.dbr",
    36, "records/items/lootaffixes/prefix/b_ar013_ar_b.dbr",
    54, "records/items/lootaffixes/prefix/b_ar013_ar_c.dbr",
    70, "records/items/lootaffixes/prefix/b_ar013_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar013_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar013_ar_f.dbr",
};

const ItemAffix prefixClerics
{
    GeneratStat, AllArmorNoBelt, 6, Clerics
};

//aetherfire
//all armor, all jewelry
//[10408]  p=records/items/lootaffixes/prefix/b_ar033_ar.dbr
const ItemLvlName Aetherfire[6]
{
    5, "records/items/lootaffixes/prefix/b_ar033_ar.dbr",
    36, "records/items/lootaffixes/prefix/b_ar033_ar_b.dbr",
    50, "records/items/lootaffixes/prefix/b_ar033_ar_c.dbr",
    68, "records/items/lootaffixes/prefix/b_ar033_ar_d.dbr",
    82, "records/items/lootaffixes/prefix/b_ar033_ar_e.dbr",
    92, "records/items/lootaffixes/prefix/b_ar033_ar_f.dbr",
};

const ItemAffix prefixAetherfire
{
    AetherDamage, AllArmorNoBelt | AllJewelry | Belt, 6, Aetherfire
};

//*******************************************************
//class specific prefixes
//trickster's - +2 savagery, +2 anatomy of murder, 5% offensive, lightn dmg, poison res
//all armor no belt, medals, dag, scepters
//[1364]  p=records/items/lootaffixes/prefix/b_class019_a03.dbr
//grimtools shows all these class prefix items at: L42, L65, and L90 and marked as a, b, and c records respectively
//however test shows 'a03' dropped at L100 and the dropped chest armor shows 5% offensive as a L90 prefix in buildtools
//the 'a03' record in buildtools also shows up as L90 and rerolling the stats does show 5% offensive
const ItemLvlName Tricksters[3]
{
    90, "records/items/lootaffixes/prefix/b_class019_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class019_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class019_a03.dbr",
};

const ItemAffix prefixTricksters
{
    LightningDamage | BleedDamage | OffenseType, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Tricksters //only show as having 1 record
};

//deceiver's - +2 death sentence, +2 destruction, fire/chaos dmg, 4% def, bleed res
//all armor no belt, dag, scept, medals
//[11300]  p=records/items/lootaffixes/prefix/b_class024_a03.dbr
//***NOTE*** trickster's prefix assessment hold true for this record
const ItemLvlName Deceivers[3]
{
    90, "records/items/lootaffixes/prefix/b_class024_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class024_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class024_a03.dbr",
};

const ItemAffix prefixDeceivers
{
    FireDamage | ChaosDamage | DefenseType, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Deceivers //only show as having 1 record
};

//shieldbreak's - +2 eye of reck, +2 flame touched, phy/fire dmg, 5% off, slow res
//all armor no belt, dag, scept, medals
//[18156]  p=records/items/lootaffixes/prefix/b_class038_a03.dbr
//***NOTE*** trickster's prefix assessment hold true for this record
const ItemLvlName Shieldbreakers[3]
{
    90, "records/items/lootaffixes/prefix/b_class038_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class038_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class038_a03.dbr",
};

const ItemAffix prefixShieldbreakers
{
    PhysicalDamage | FireDamage | OffenseType, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Shieldbreakers //only show as having 1 record
};

//purifier's - +2 storm box of elgoloth, +2 stun jacks, 5% offensive, elem burn/frost/elect dmg, freeze res
//all armor no belt, medal, dag and scepters
//[17416]  p=records/items/lootaffixes/prefix/b_class023_a03.dbr
//***NOTE*** verify trickster's prefix assessment holds true
const ItemLvlName Purifiers[3]
{
    90, "records/items/lootaffixes/prefix/b_class023_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class023_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class023_a03.dbr",
};

const ItemAffix prefixPurifiers
{
    ElementalDamage | OffenseType, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Purifiers //only show as having 1 record
};

//druid's - +2 primal strike, +2 overload, lightn dmg, 5% offensive, chaos res
//all armor no belt, medals
//[11300]  p=records/items/lootaffixes/prefix/b_class020_a.dbr
//***NOTE*** trickster's prefix assessment DOES NOT hold true for this record
const ItemLvlName Druids[3]
{
    42, "records/items/lootaffixes/prefix/b_class020_a.dbr",
    65, "records/items/lootaffixes/prefix/b_class020_b.dbr",
    90, "records/items/lootaffixes/prefix/b_class020_c.dbr",
};

const ItemAffix prefixDruids
{
    LightningDamage | OffenseType, AllArmorNoBelt | Medal | Dagger | Scepter, 3, Druids
};

//paladins - +2 vire's might, +2 horn of gandarr, phy/ele dmg, 5% def, freeze res
//all armor no belt, medal, dag, scepters
//[7816]  p=records/items/lootaffixes/prefix/b_class043_a03.dbr
//***NOTE*** trickster's prefix assessment hold true for this record
const ItemLvlName Paladins[3]
{
    90, "records/items/lootaffixes/prefix/b_class043_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class043_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class043_a03.dbr",
};

const ItemAffix prefixPaladins
{
    PhysicalDamage | ElementalDamage | DefenseType, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Paladins //only show as having 1 record
};

//defiler's - +2 siphon souls, +2 vindictive flame, fire/aether/burn dmg, 5% off, stun res
//all armor no belt, dag, scepter, medals
//[17484]  p=records/items/lootaffixes/prefix/b_class030_a03.dbr
const ItemLvlName Defilers[3]
{
    90, "records/items/lootaffixes/prefix/b_class030_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class030_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class030_a03.dbr",
};

const ItemAffix prefixDefilers
{
    FireDamage | AetherDamage | OffenseType, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Defilers //only show as having 1 record
};

//sorcerer's - +2 tgermite mine, +2 reckless pwr, aeth/elem dmg, %5 off, stun res
// all armor no belt, dag, scepter, medal
//[17484]  p=records/items/lootaffixes/prefix/b_class007_a03.dbr
//[27924] L42  p=records/items/lootaffixes/prefix/b_class007_a.dbr

const ItemLvlName Sorcerers[3]
{
    42, "records/items/lootaffixes/prefix/b_class007_a.dbr",
    65, "records/items/lootaffixes/prefix/b_class007_a02.dbr",
    90, "records/items/lootaffixes/prefix/b_class007_a03.dbr",
};

const ItemAffix prefixSorcerers
{
    AetherDamage | ElementalDamage | OffenseType, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Sorcerers //only show as having 1 record
};

//dervish's - +2 resilience, +2 nidalla's hidden hand, pierce/acid dmg, 11% armor, vit res
//all armor no belt, dag, scepters, medals
//[17484]  p=records/items/lootaffixes/prefix/b_class040_a03.dbr
const ItemLvlName Dervishs[3]
{
    90, "records/items/lootaffixes/prefix/b_class040_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class040_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class040_a03.dbr",
};

const ItemAffix prefixDervishs
{
    PierceDamage | PoisAcidDamage, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Dervishs //only show as having 1 record
};

//infiltrator's - +2 rune of hagarrad, +2 blade spirit, pierce/cold dmg, %5 off, stun res
//all armor no belt, dag, scepters, medals
//[5332]  p=records/items/lootaffixes/prefix/b_class025_a03.dbr
const ItemLvlName Infiltrators[3]
{
    90, "records/items/lootaffixes/prefix/b_class025_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class025_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class025_a03.dbr",
};

const ItemAffix prefixInfiltrators
{
   PierceDamage | ColdDamage | OffenseType,  AllArmorNoBelt | Medal | Dagger | Scepter, 1, Infiltrators //only show as having 1 record
};

//death knight's - +2 reaping strike, +2 blitz, phy/vit/it dmg, 7% phy, petrify res
//all armor no belt, dag, scepters, medals
//[16780]  p=records/items/lootaffixes/prefix/b_class029_a03.dbr
const ItemLvlName DeathKnight[3]
{
    90, "records/items/lootaffixes/prefix/b_class029_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class029_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class029_a03.dbr",
};

const ItemAffix prefixDeathKnight
{
    PhysicalDamage | VitalityDamage, AllArmorNoBelt | Medal | Dagger | Scepter, 1, DeathKnight //only show as having 1 record
};

//archon's - +2 righteous fervor, +2 wendigo totem, vit/bleed dmg, 5% off, poison/acid res
//all armor no belt, dag, scepters, medals
//[3964]  p=records/items/lootaffixes/prefix/b_class042_a03.dbr
const ItemLvlName Archons[3]
{
    90, "records/items/lootaffixes/prefix/b_class042_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class042_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class042_a03.dbr",
};

const ItemAffix prefixArchons
{
    VitalityDamage | BleedDamage | OffenseType, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Archons //only show as having 1 record
};

//witch hunter - +2 vulnerability, +2 nidalla's justif ends, acid/vit dmg, %5 def
//all armor no belt, dag, scepters, medals
//[15024]  p=records/items/lootaffixes/prefix/b_class008_a03.dbr
const ItemLvlName WitchHunters[3]
{
    90, "records/items/lootaffixes/prefix/b_class008_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class008_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class008_a03.dbr",
};

const ItemAffix prefixWitchHunters
{
    PoisAcidDamage | VitalityDamage | DefenseType, AllArmorNoBelt | Medal | Dagger | Scepter, 1, WitchHunters //only show as having 1 record
};

//warlock's - +2 blood of dreeg, +2 albrecht's aether ray, aeth/chaos dmg, 5% def, elem resist
//all armor no belt, dag, scepters, medals
//[23560]  p=records/items/lootaffixes/prefix/b_class009_a02.dbr
const ItemLvlName Warlocks[3]
{
    90, "records/items/lootaffixes/prefix/b_class009_a02.dbr",
    90, "records/items/lootaffixes/prefix/b_class009_a02.dbr",
    90, "records/items/lootaffixes/prefix/b_class009_a02.dbr",
};

const ItemAffix prefixWarlocks
{
    AetherDamage | ChaosDamage | DefenseType, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Warlocks //only show as having 1 record
};

//warlord's - +2 retribution, +2 counter strike, phys dmg, incr armor 11%, 46% retal dmg, aeth res
//all armor no belt, dag, scepters, medals
//[18568]  p=records/items/lootaffixes/prefix/b_class037_a03.dbr
const ItemLvlName Warlords[3]
{
    90, "records/items/lootaffixes/prefix/b_class037_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class037_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class037_a03.dbr",
};

const ItemAffix prefixWarlords
{
    PhysicalDamage | RetaliationType, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Warlords //only show as having 1 record
};

//warrior's - +3 field cmd, phy/bld dmg, skill cdr, vit res
//helm, dag, scepters, amulets
//[11300]  p=records/items/lootaffixes/prefix/b_class011_soldier01_je_c.dbr
const ItemLvlName Warriors[3]
{
    42, "records/items/lootaffixes/prefix/b_class011_soldier01_je.dbr",
    65, "records/items/lootaffixes/prefix/b_class011_soldier01_je_b.dbr",
    90, "records/items/lootaffixes/prefix/b_class011_soldier01_je_c.dbr",
};

const ItemAffix prefixWarriors
{
    PhysicalDamage, Helm | Amulet | Dagger | Scepter, 3, Warriors
};

//reaper's - +2 necrotic edge, +2 execution, cold/vit dmg, 5% off, chaos res
//all armor no belt, dags, scepters, medals
//[27048]  p=records/items/lootaffixes/prefix/b_class032_a02.dbr
const ItemLvlName Reapers[3]
{
    42, "records/items/lootaffixes/prefix/b_class032_a.dbr",
    65, "records/items/lootaffixes/prefix/b_class032_a02.dbr",
    90, "records/items/lootaffixes/prefix/b_class032_a03.dbr",
};

const ItemAffix prefixReapers
{
    ColdDamage | VitalityDamage | OffenseType, AllArmorNoBelt | Medal | Dagger | Scepter, 3, Reapers //only show as having 1 record
};

//sentinel's - +2 reprisal, +2 black death, acid/pos dmg, 46% retal dmg, 7% spirit, aeth res
//all armor no belt, dags, scepters, medals
//[17132]  p=records/items/lootaffixes/prefix/b_class039_a03.dbr
const ItemLvlName Sentinels[3]
{
    90, "records/items/lootaffixes/prefix/b_class039_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class039_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class039_a03.dbr",
};

const ItemAffix prefixSentinels
{
    PoisAcidDamage | RetaliationType, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Sentinels //only show as having 1 record
};

//commando's - +2 military cond., +2 temper, phys/fire dmg, aether res
//all armor no belt, dags, scepters, medals
//[2156]  p=records/items/lootaffixes/prefix/b_class001_a03.dbr
const ItemLvlName Commandos[3]
{
    90, "records/items/lootaffixes/prefix/b_class001_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class001_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class001_a03.dbr",
};

const ItemAffix prefixCommandos
{
    PhysicalDamage | FireDamage, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Commandos //only show as having 1 record
};

//magis - +3 devastitaion, aeth/delem dmg, 5% skill cooldown, chaos res
//helm, dags, scepterd, amulets
//[1912]  p=records/items/lootaffixes/prefix/b_class015_arcanist01_je_b.dbr
const ItemLvlName Magis[3]
{
    42, "records/items/lootaffixes/prefix/b_class015_arcanist01_je.dbr",
    65, "records/items/lootaffixes/prefix/b_class015_arcanist01_je_b.dbr",
    90, "records/items/lootaffixes/prefix/b_class015_arcanist01_je_c.dbr",
};

const ItemAffix prefixMagis
{
    AetherDamage | ElementalDamage, Helm | Amulet | Dagger | Scepter, 3, Magis //only show as having 1 record
};

//heretics - +3 aspect of the guardian, chaos dmg, 5% def, bleed res
//helm, dags, scepters, amulets
//[8276]  p=records/items/lootaffixes/prefix/b_class013_occultist01_je_b.dbr
const ItemLvlName Heretics[3]
{
    90, "records/items/lootaffixes/prefix/b_class013_occultist01_je_c.dbr",
    90, "records/items/lootaffixes/prefix/b_class013_occultist01_je_c.dbr",
    90, "records/items/lootaffixes/prefix/b_class013_occultist01_je_c.dbr",
};

const ItemAffix prefixHeretics
{
    ChaosDamage | DefenseType, Helm | Amulet | Dagger | Scepter, 1, Heretics //only show as having 1 record
};


//templar's - +2 celestial presence, +2 inferno, qeth/elem dmg, incr armor 11%, chaos res
//all armor no belt, dag, scepters, medals
//[15848]  p=records/items/lootaffixes/prefix/b_class041_c02.dbr

//battlemage's - +2 squad tactics, +2 mirror of ereoctes, phys/elem dmg, 7% spirit, poisn/acid res
//all armor no belt, dags, scepters, medals
//[18568]  p=records/items/lootaffixes/prefix/b_class004_a03.dbr
const ItemLvlName Battlemages[3]
{
    90, "records/items/lootaffixes/prefix/b_class004_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class004_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class004_a03.dbr",
};

const ItemAffix prefixBattlemages
{
    PhysicalDamage | ElementalDamage, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Battlemages //only show as having 1 record
};

//vindicator's - +2 arcane empowerment, +2 raging tempest, pierce/lightn dmg, 5% def, pois/acid res
//all armor no belt, dags, scepters, medals
//[15376]  p=records/items/lootaffixes/prefix/b_class027_a03.dbr
const ItemLvlName Vindicators[3]
{
    90, "records/items/lootaffixes/prefix/b_class004_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class004_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class004_a03.dbr",
};

const ItemAffix prefixVindicators
{
    PierceDamage | LightningDamage, AllArmorNoBelt | Medal | Dagger | Scepter, 1, Vindicators //only show as having 1 record
};

//assassin's - +3 shadow strike, pierce/cold dmg, 5% def, slow res
//
//[23944]  p=records/items/lootaffixes/prefix/b_class014_nightblade01_je.dbr
const ItemLvlName Assassins[3]
{
    42, "records/items/lootaffixes/prefix/b_class014_nightblade01_je.dbr",
    65, "records/items/lootaffixes/prefix/b_class014_nightblade01_je_b.dbr",
    90, "records/items/lootaffixes/prefix/b_class014_nightblade01_je_c.dbr",
};

const ItemAffix prefixAssassins
{
    PierceDamage | ColdDamage, Helm | Amulet | Dagger | Scepter, 3, Assassins
};

//spellbreaker's - +2 night's chill, +2 star pact, pierce elem dmg, health, stun res,
//all armor no belt, dag, scept, medals
//[11300]  p=records/items/lootaffixes/prefix/b_class010_a03.dbr
const ItemLvlName Spellbreakers[3]
{
    90, "records/items/lootaffixes/prefix/b_class010_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class010_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class010_a03.dbr",
};

const ItemAffix prefixSpellbreakers
{
    PierceDamage | ElementalDamage, Helm | Amulet | Dagger | Scepter, 3, Spellbreakers
};

//saboteur's - +2 fire strike, +2 shadow strike, pierce/fire dmg, 7% hp, pierce res
//all armor no belt, dags, scepters, medals
//[4556]  p=records/items/lootaffixes/prefix/b_class006_a03.dbr
const ItemLvlName Saboteurs[3]
{
    90, "records/items/lootaffixes/prefix/b_class006_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class006_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class006_a03.dbr",
};

const ItemAffix prefixSaboteurs
{
    PierceDamage | FireDamage, AllArmorNoBelt | Medal | Dagger | Scepter, 3, Saboteurs
};

//blademasters - +2 markovian's advantage, +2 whiring death, pierce/bleed dmg, 6 %phys, slow res
//all armor no belt, dags, scepters, medals
//[6448]  p=records/items/lootaffixes/prefix/b_class003_a03.dbr
const ItemLvlName Blademasters[3]
{
    90, "records/items/lootaffixes/prefix/b_class003_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class003_a03.dbr",
    90, "records/items/lootaffixes/prefix/b_class003_a03.dbr",
};

const ItemAffix prefixBlademasters
{
    PierceDamage | BleedDamage, AllArmorNoBelt | Medal | Dagger | Scepter, 3, Blademasters
};

//ritualist's - +2 blight burst, +2 ground slam, vit dmg, stun res, bet bonuses
//all armor no belt, dag, scepters, medals
//[8432]  p=records/items/lootaffixes/prefix/b_class034_a.dbr

//spellbinder's - +2 spectal wrath, +2 arcane will, vit/aether dmg, %7 spirit, pierce res
//all armor no belt, dag, scept, medals
//[7816]  p=records/items/lootaffixes/prefix/b_class033_a03.dbr
//***NOTE*** verify trickster's prefix assessment hold true for this record

//interrogator's - +3 word of renewal (inquisitor), elem dmg, skill cooldown reduction
//helm, dag, scepters, medals
//[11300]  p=records/items/lootaffixes/prefix/b_class035_inquisitor01_je_b.dbr

//seer's - +3 mogdrogen's pact, lightn dmg, skill cooldown reduction
//helm, dag, scepters, medals
//[11300]  p=records/items/lootaffixes/prefix/b_class021_shaman01_je_b.dbr

//dread lord's - vit dmg, dmg to health, chaos res
//all jewelry, belt
//[11300]  p=records/items/lootaffixes/prefix/b_ar006_je_e.dbr

//-------------------------------------------
//1h wep
//-------------------------------------------
//thunderstruck - electr, lightn dmg, offen
//all 1h wep
//[15376]  p=records/items/lootaffixes/prefix/b_wpn024_melee1h_g.dbr
const ItemLvlName Wep1hThunderstruck[7]
{
    5, "records/items/lootaffixes/prefix/b_wpn024_melee1h_a.dbr",
    24, "records/items/lootaffixes/prefix/b_wpn024_melee1h_b.dbr",
    41, "records/items/lootaffixes/prefix/b_wpn024_melee1h_c.dbr",
    55, "records/items/lootaffixes/prefix/b_wpn024_melee1h_d.dbr",
    68, "records/items/lootaffixes/prefix/b_wpn024_melee1h_e.dbr",
    82, "records/items/lootaffixes/prefix/b_wpn024_melee1h_f.dbr",
    92, "records/items/lootaffixes/prefix/b_wpn024_melee1h_g.dbr",
};

const ItemAffix prefixWep1hThunderstruck
{
    LightningDamage, Melee1h, 7, Wep1hThunderstruck
};

//skyfallen - +2 savagery, lightn dmg, offen
//all 1h wep
//[15464]  p=records/items/lootaffixes/prefix/b_wpn012_melee1h_g.dbr
const ItemLvlName Wep1hSkyfallen[7]
{
    5, "records/items/lootaffixes/prefix/b_wpn012_melee1h_a.dbr",
    24, "records/items/lootaffixes/prefix/b_wpn012_melee1h_b.dbr",
    41, "records/items/lootaffixes/prefix/b_wpn012_melee1h_c.dbr",
    55, "records/items/lootaffixes/prefix/b_wpn012_melee1h_d.dbr",
    68, "records/items/lootaffixes/prefix/b_wpn012_melee1h_e.dbr",
    82, "records/items/lootaffixes/prefix/b_wpn012_melee1h_f.dbr",
    92, "records/items/lootaffixes/prefix/b_wpn012_melee1h_g.dbr",
};

const ItemAffix prefixWep1hSkyfallen
{
    LightningDamage, Melee1h, 7, Wep1hSkyfallen
};


//officer's - +3 field command, 42% all dmg, phys/crit dmg, 62 offense
//all 1h wep
//[23220]  p=records/items/lootaffixes/prefix/b_wpn007_melee1h_g.dbr
const ItemLvlName Wep1hOfficers[7]
{
    5, "records/items/lootaffixes/prefix/b_wpn007_melee1h_a.dbr",
    24, "records/items/lootaffixes/prefix/b_wpn007_melee1h_b.dbr",
    40, "records/items/lootaffixes/prefix/b_wpn007_melee1h_c.dbr",
    54, "records/items/lootaffixes/prefix/b_wpn007_melee1h_d.dbr",
    67, "records/items/lootaffixes/prefix/b_wpn007_melee1h_e.dbr",
    82, "records/items/lootaffixes/prefix/b_wpn007_melee1h_f.dbr",
    92, "records/items/lootaffixes/prefix/b_wpn007_melee1h_g.dbr",
};

const ItemAffix prefixWep1hOfficers
{
    LightningDamage | ColdDamage | FireDamage | PhysicalDamage, Melee1h, 7, Wep1hOfficers
};

//frostborn - cold, cold/frost% dmg, def, freeze res
//all 1h wep
//[23220]  p=records/items/lootaffixes/prefix/b_wpn013_melee1h_g.dbr
const ItemLvlName Wep1hFrostborn[7]
{
    5, "records/items/lootaffixes/prefix/b_wpn013_melee1h_a.dbr",
    24, "records/items/lootaffixes/prefix/b_wpn013_melee1h_b.dbr",
    41, "records/items/lootaffixes/prefix/b_wpn013_melee1h_c.dbr",
    55, "records/items/lootaffixes/prefix/b_wpn013_melee1h_d.dbr",
    68, "records/items/lootaffixes/prefix/b_wpn013_melee1h_e.dbr",
    82, "records/items/lootaffixes/prefix/b_wpn013_melee1h_f.dbr",
    92, "records/items/lootaffixes/prefix/b_wpn013_melee1h_g.dbr",
};

const ItemAffix prefixWep1hFrostborn
{
    ColdDamage, Melee1h, 7, Wep1hFrostborn
};

//glacial - frost, cold/frost% dmg, offen
//all 1h wep
//[23220]  p=records/items/lootaffixes/prefix/b_wpn023_melee1h_g.dbr
const ItemLvlName Wep1hGlacial[7]
{
    5, "records/items/lootaffixes/prefix/b_wpn023_melee1h_a.dbr",
    24, "records/items/lootaffixes/prefix/b_wpn023_melee1h_b.dbr",
    41, "records/items/lootaffixes/prefix/b_wpn023_melee1h_c.dbr",
    55, "records/items/lootaffixes/prefix/b_wpn023_melee1h_d.dbr",
    68, "records/items/lootaffixes/prefix/b_wpn023_melee1h_e.dbr",
    82, "records/items/lootaffixes/prefix/b_wpn023_melee1h_f.dbr",
    92, "records/items/lootaffixes/prefix/b_wpn023_melee1h_g.dbr",
};

const ItemAffix prefixWep1hGlacial
{
    ColdDamage,  Melee1h, 7, Wep1hGlacial
};

//hellfire
//1h wep
//[25472]  p=records/items/lootaffixes/prefix/b_wpn016_melee1h_b.dbr
const ItemLvlName Wep1hHellfire[7]
{
    22, "records/items/lootaffixes/prefix/b_wpn016_melee1h_a.dbr",
    35, "records/items/lootaffixes/prefix/b_wpn016_melee1h_b.dbr",
    46, "records/items/lootaffixes/prefix/b_wpn016_melee1h_c.dbr",
    60, "records/items/lootaffixes/prefix/b_wpn016_melee1h_d.dbr",
    74, "records/items/lootaffixes/prefix/b_wpn016_melee1h_e.dbr",
    82, "records/items/lootaffixes/prefix/b_wpn016_melee1h_f.dbr",
    92, "records/items/lootaffixes/prefix/b_wpn016_melee1h_g.dbr",
};

const ItemAffix prefixWep1hHellfire
{
    FireDamage,  Melee1h, 7, Wep1hHellfire
};

//earthbound
//1h wep
//[27396]  p=records/items/lootaffixes/prefix/b_wpn014_melee1h_c.dbr
const ItemLvlName Wep1hEarthbound[7]
{
    22, "records/items/lootaffixes/prefix/b_wpn014_melee1h_a.dbr",
    35, "records/items/lootaffixes/prefix/b_wpn014_melee1h_b.dbr",
    46, "records/items/lootaffixes/prefix/b_wpn014_melee1h_c.dbr",
    60, "records/items/lootaffixes/prefix/b_wpn014_melee1h_d.dbr",
    74, "records/items/lootaffixes/prefix/b_wpn014_melee1h_e.dbr",
    82, "records/items/lootaffixes/prefix/b_wpn014_melee1h_f.dbr",
    92, "records/items/lootaffixes/prefix/b_wpn014_melee1h_g.dbr",
};

//no fire dmg but has vire's might for oathkeeper, hence, adding in fire
const ItemAffix prefixWWep1hEarthbound
{
    PhysicalDamage | FireDamage,  Melee1h, 7, Wep1hEarthbound
};

//bloodthirsty - +2 circle of slaughter, %atk converted to health, flat bleed, bleed+duration%, atk sped
//1h wep
//[6716]  p=records/items/lootaffixes/prefix/b_wpn006_melee1h_g.dbr
const ItemLvlName Wep1hBloodthirsty[7]
{
    5, "records/items/lootaffixes/prefix/b_wpn006_melee1h_a.dbr",
    25, "records/items/lootaffixes/prefix/b_wpn006_melee1h_b.dbr",
    40, "records/items/lootaffixes/prefix/b_wpn006_melee1h_c.dbr",
    54, "records/items/lootaffixes/prefix/b_wpn006_melee1h_d.dbr",
    67, "records/items/lootaffixes/prefix/b_wpn006_melee1h_e.dbr",
    82, "records/items/lootaffixes/prefix/b_wpn006_melee1h_f.dbr",
    92, "records/items/lootaffixes/prefix/b_wpn006_melee1h_g.dbr",
};

//no fire dmg but has vire's might for oathkeeper, hence, adding in fire
const ItemAffix prefixWep1hBloodthirsty
{
    BleedDamage,  Melee1h, 7, Wep1hBloodthirsty
};

//magestorm - +2 lightning tether, lightn/aether dmg
//1h wep
//[19556]  p=records/items/lootaffixes/prefix/b_wpn105_melee1h_d.dbr
const ItemLvlName Wep1hMagestorm[7]
{
    5, "records/items/lootaffixes/prefix/b_wpn105_melee1h_a.dbr",
    26, "records/items/lootaffixes/prefix/b_wpn105_melee1h_b.dbr",
    41, "records/items/lootaffixes/prefix/b_wpn105_melee1h_c.dbr",
    55, "records/items/lootaffixes/prefix/b_wpn105_melee1h_d.dbr",
    68, "records/items/lootaffixes/prefix/b_wpn105_melee1h_e.dbr",
    82, "records/items/lootaffixes/prefix/b_wpn105_melee1h_f.dbr",
    92, "records/items/lootaffixes/prefix/b_wpn105_melee1h_g.dbr",
};

//no fire dmg but has vire's might for oathkeeper, hence, adding in fire
const ItemAffix prefixWep1hMagestorm
{
    AetherDamage | LightningDamage,  Melee1h, 7, Wep1hMagestorm
};

//sinister
//1h wep
//[8016]  p=records/items/lootaffixes/prefix/b_wpn020_melee1h_b.dbr
const ItemLvlName Wep1hSinister[7]
{
    5, "records/items/lootaffixes/prefix/b_wpn020_melee1h_a.dbr",
    24, "records/items/lootaffixes/prefix/b_wpn020_melee1h_b.dbr",
    41, "records/items/lootaffixes/prefix/b_wpn020_melee1h_c.dbr",
    55, "records/items/lootaffixes/prefix/b_wpn020_melee1h_d.dbr",
    68, "records/items/lootaffixes/prefix/b_wpn020_melee1h_e.dbr",
    82, "records/items/lootaffixes/prefix/b_wpn020_melee1h_f.dbr",
    92, "records/items/lootaffixes/prefix/b_wpn020_melee1h_g.dbr",
};

//no fire dmg but has vire's might for oathkeeper, hence, adding in fire
const ItemAffix prefixWep1hSinister
{
    PierceDamage,  Melee1h, 7, Wep1hSinister
};

//heart piercing
//1h wep
//[8016]  p=records/items/lootaffixes/prefix/b_wpn021_melee1h_b.dbr
const ItemLvlName Wep1hHeartPiercing[7]
{
    5, "records/items/lootaffixes/prefix/b_wpn021_melee1h_a.dbr",
    24, "records/items/lootaffixes/prefix/b_wpn021_melee1h_b.dbr",
    41, "records/items/lootaffixes/prefix/b_wpn021_melee1h_c.dbr",
    55, "records/items/lootaffixes/prefix/b_wpn021_melee1h_d.dbr",
    68, "records/items/lootaffixes/prefix/b_wpn021_melee1h_e.dbr",
    82, "records/items/lootaffixes/prefix/b_wpn021_melee1h_f.dbr",
    92, "records/items/lootaffixes/prefix/b_wpn021_melee1h_g.dbr",
};

//no fire dmg but has vire's might for oathkeeper, hence, adding in fire
const ItemAffix prefixWep1hHeartPiercing
{
    PierceDamage,  Melee1h, 7, Wep1hHeartPiercing
};

//eldritch
//wep1h
//[19600]  p=records/items/lootaffixes/prefix/b_wpn011_melee1h_b.dbr
const ItemLvlName Wep1hEldritch[7]
{
    5, "records/items/lootaffixes/prefix/b_wpn011_melee1h_a.dbr",
    24, "records/items/lootaffixes/prefix/b_wpn011_melee1h_b.dbr",
    42, "records/items/lootaffixes/prefix/b_wpn011_melee1h_c.dbr",
    56, "records/items/lootaffixes/prefix/b_wpn011_melee1h_d.dbr",
    70, "records/items/lootaffixes/prefix/b_wpn011_melee1h_e.dbr",
    82, "records/items/lootaffixes/prefix/b_wpn011_melee1h_f.dbr",
    92, "records/items/lootaffixes/prefix/b_wpn011_melee1h_g.dbr",
};

//no fire dmg but has vire's might for oathkeeper, hence, adding in fire
const ItemAffix prefixWep1hEldritch
{
    VitalityDamage | PoisAcidDamage,  Melee1h, 7, Wep1hEldritch
};

//bileridden
//offhand
//[10480]  p=records/items/lootaffixes/prefix/b_sh102_a.dbr
const ItemLvlName OffhandBileridden[6]
{
    5, "records/items/lootaffixes/prefix/b_sh102_a.dbr",
    36, "records/items/lootaffixes/prefix/b_sh102_b.dbr",
    50, "records/items/lootaffixes/prefix/b_sh102_c.dbr",
    68, "records/items/lootaffixes/prefix/b_sh102_d.dbr",
    82, "records/items/lootaffixes/prefix/b_sh102_e.dbr",
    92, "records/items/lootaffixes/prefix/b_sh102_f.dbr",
};

//no fire dmg but has vire's might for oathkeeper, hence, adding in fire
const ItemAffix prefixOffhandBileridden
{
    VitalityDamage | PoisAcidDamage, Offhand, 6, OffhandBileridden
};

//destroyer's
//offhand
//[10480]  p=records/items/lootaffixes/prefix/b_sh011_a.dbr
const ItemLvlName OffhandDestroyers[6]
{
    5, "records/items/lootaffixes/prefix/b_sh011_a.dbr",
    36, "records/items/lootaffixes/prefix/b_sh011_b.dbr",
    50, "records/items/lootaffixes/prefix/b_sh011_c.dbr",
    66, "records/items/lootaffixes/prefix/b_sh011_d.dbr",
    82, "records/items/lootaffixes/prefix/b_sh011_e.dbr",
    92, "records/items/lootaffixes/prefix/b_sh011_f.dbr",
};

//no fire dmg but has vire's might for oathkeeper, hence, adding in fire
const ItemAffix prefixOffhandDestroyers
{
    FireDamage,  Offhand, 6, OffhandDestroyers
};

//sandstorm
//offhand
//[10480]  p=records/items/lootaffixes/prefix/b_sh007_a.dbr
const ItemLvlName OffhandSandstorm[6]
{
    20, "records/items/lootaffixes/prefix/b_sh007_a.dbr",
    46, "records/items/lootaffixes/prefix/b_sh007_b.dbr",
    60, "records/items/lootaffixes/prefix/b_sh007_c.dbr",
    74, "records/items/lootaffixes/prefix/b_sh007_d.dbr",
    82, "records/items/lootaffixes/prefix/b_sh007_e.dbr",
    92, "records/items/lootaffixes/prefix/b_sh007_f.dbr",
};

//no fire dmg but has vire's might for oathkeeper, hence, adding in fire
const ItemAffix prefixOffhandSandstorm
{
    ElementalDamage,  Offhand, 6, OffhandSandstorm
};


//thunderstruck
//offhand
//[19868]  p=records/items/lootaffixes/prefix/b_sh009_b.dbr

//magestorm
//offhand
//[19868]  p=records/items/lootaffixes/prefix/b_sh104_c.dbr

//essence drinker's
//offhand
//[19868]  p=records/items/lootaffixes/prefix/b_sh101_c.dbr

//=====================================
// list container
//=====================================
const std::vector<const ItemAffix*> prefixList =
{ 
	&prefixIncorruptable, 
	&prefixUnyeilding, 
	&prefixLich,
	&prefixHarmonious,

	&prefixAggressive,
    &prefixAggressiveArmor,
    &prefixStalwart,
	&prefixTempest, 
    &prefixResonant,
	&prefixDevastating, 

	&prefixMenacing,
    &prefixLightBringer,
    &prefixGenerals,
    &prefixManiacal,
    &prefixDemonic,

    &prefixStonefacedJewelry,
    //&prefixImperviousPiercePoison,
    &prefixConsecrated,
    &prefixOverseer,
    //&prefixCelestial,
    &prefixStonehide,
	&prefixThunderstruck,
	&prefixBlighted,
	&prefixBloodletters,
	&prefixAncient,
    &prefixRuneCarved,

	&prefixFlamewall,
	&prefixShieldStonehide,
	&prefixStonefacedShield,
	&prefixKeepers,
    &prefixEldritch,
    &prefixOverlords,
    &prefixGlacialShield,
    &prefixSuperchargedShield,

    &prefixPreserving,
    &prefixMagestorm,
    &prefixRampage,
    &prefixImposing,
    &prefixFormidable,
    &prefixClerics,
    &prefixAetherfire, 
    &prefixRimeFrost,
    &prefixDreadLords,
    &prefixDeathKnight,
    &prefixWraithBoundJewel,
    &prefixTaskmasters,

    &prefixDruids,
    &prefixDervishs,
    &prefixWitchHunters,
    &prefixHeretics,
    &prefixReapers,
    &prefixPurifiers,
    &prefixTricksters,
    &prefixDeceivers,
    &prefixInfiltrators,
    &prefixMagis,
    &prefixBattlemages,
    &prefixShieldbreakers,
    &prefixPaladins,
    &prefixDefilers,
    &prefixSentinels,
    &prefixCommandos,
    &prefixSorcerers,
    &prefixArchons,
    &prefixWarlocks,
    &prefixMerciless,
    &prefixCutthroats,
    &prefixWarlords,
    &prefixWarriors,
    &prefixVindicators,
    &prefixAssassins,
    &prefixSpellbreakers,
    &prefixSaboteurs,
    &prefixBlademasters,

    &prefixWep1hThunderstruck,
    &prefixWep1hSkyfallen,
    &prefixWep1hOfficers,
    &prefixWep1hFrostborn,
    &prefixWep1hGlacial,
    &prefixWep1hHellfire,
    &prefixWWep1hEarthbound,
    &prefixWep1hBloodthirsty,
    &prefixWep1hMagestorm,
    &prefixWep1hSinister,
    &prefixWep1hHeartPiercing,
    &prefixWep1hEldritch,

    &prefixOffhandBileridden,
    &prefixOffhandDestroyers,
    &prefixOffhandSandstorm
};

