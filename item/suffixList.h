//of natures bounty - rings
const ItemLvlName ofNaturebountyTable[6]
{
	5, "records/items/lootaffixes/suffix/b_ar052_je.dbr",
	30, "records/items/lootaffixes/suffix/b_ar052_je_b.dbr",
	48, "records/items/lootaffixes/suffix/b_ar052_je_c.dbr",
	67, "records/items/lootaffixes/suffix/b_ar052_je_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar052_je_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar052_je_f.dbr",
};

const ItemAffix suffixNaturesBounty
{
	GeneratStat, Ring, 6, ofNaturebountyTable
};

//of nature's bounty - all armor no belt
//[9424]  s=records/items/lootaffixes/suffix/b_ar007_arje_f.dbr
const ItemLvlName ofNaturebountyArmor[6]
{
    5, "records/items/lootaffixes/suffix/b_ar007_arje.dbr",
    30, "records/items/lootaffixes/suffix/b_ar007_arje_b.dbr",
    48, "records/items/lootaffixes/suffix/b_ar007_arje_c.dbr",
    67, "records/items/lootaffixes/suffix/b_ar007_arje_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar007_arje_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar007_arje_f.dbr",
};

const ItemAffix suffixNaturesBountyArmor
{
    GeneratStat, AllArmorNoBelt, 6, ofNaturebountyArmor
};


//of readiness - all jewelry, gloves, belts
const ItemLvlName ofReadiness[8]
{
	5, "records/items/lootaffixes/suffix/a020b_ch_oada_01.dbr",
	10, "records/items/lootaffixes/suffix/a020b_ch_oada_02.dbr",
	20, "records/items/lootaffixes/suffix/a020b_ch_oada_03.dbr",
	30, "records/items/lootaffixes/suffix/a020b_ch_oada_04.dbr",
	44, "records/items/lootaffixes/suffix/a020b_ch_oada_05.dbr",
	60, "records/items/lootaffixes/suffix/a020b_ch_oada_06.dbr",
	85, "records/items/lootaffixes/suffix/a020b_ch_oada_07.dbr",
	94, "records/items/lootaffixes/suffix/a020b_ch_oada_08.dbr",
};


const ItemAffix suffixOfReadiness
{
	GeneratStat, AllJewelry | Belt | Gloves , 8, ofReadiness
};

//of readiness - helm, shoulders, chest, pants, boots
const ItemLvlName ofReadinessArmor[8]
{
    5, "records/items/lootaffixes/suffix/a020a_ch_oada_01.dbr",
    10, "records/items/lootaffixes/suffix/a020a_ch_oada_02.dbr",
    20, "records/items/lootaffixes/suffix/a020a_ch_oada_03.dbr",
    30, "records/items/lootaffixes/suffix/a020a_ch_oada_04.dbr",
    44, "records/items/lootaffixes/suffix/a020a_ch_oada_05.dbr",
    60, "records/items/lootaffixes/suffix/a020a_ch_oada_06.dbr",
    85, "records/items/lootaffixes/suffix/a020a_ch_oada_07.dbr",
    94, "records/items/lootaffixes/suffix/a020a_ch_oada_08.dbr",
};


const ItemAffix suffixOfReadinessArmor
{
    GeneratStat, Helm | Shoulder | Jacket | Pants | Boots , 8, ofReadinessArmor
};

//of the gildam arcanum - all jewelry, belt
const ItemLvlName ofGildamArcanumTable[6]
{
	22, "records/items/lootaffixes/suffix/b_ar009_je.dbr",
	41, "records/items/lootaffixes/suffix/b_ar009_je_b.dbr",
	55, "records/items/lootaffixes/suffix/b_ar009_je_c.dbr",
	70, "records/items/lootaffixes/suffix/b_ar009_je_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar009_je_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar009_je_f.dbr",
};

const ItemAffix suffixOfGildamArcanum
{
    GeneratStat, AllJewelry | Belt, 6, ofGildamArcanumTable
};

//of dancing shadows - cunning, movement, chance to avoid melee attks, pierce/chaos res
//pants
//[25940]  s=records/items/lootaffixes/suffix/b_ar059_ar_d.dbr
const ItemLvlName ofDancingShadows[6]
{
    5, "records/items/lootaffixes/suffix/b_ar059_ar.dbr",
    34, "records/items/lootaffixes/suffix/b_ar059_ar_b.dbr",
    52, "records/items/lootaffixes/suffix/b_ar059_ar_c.dbr",
    72, "records/items/lootaffixes/suffix/b_ar059_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar059_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar059_ar_f.dbr",
};

const ItemAffix suffixofDancingShadows
{
    GeneratStat, Pants, 6, ofDancingShadows
};

//of stonefooting - phys, movement spd, pierce/poisacid res, incr armor%
//boots
//[14468]  s=records/items/lootaffixes/suffix/b_ar058_ar.dbr
const ItemLvlName ofStonefooting[6]
{
    5, "records/items/lootaffixes/suffix/b_ar058_ar.dbr",
    34, "records/items/lootaffixes/suffix/b_ar058_ar_b.dbr",
    52, "records/items/lootaffixes/suffix/b_ar058_ar_c.dbr",
    72, "records/items/lootaffixes/suffix/b_ar058_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar058_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar058_ar_f.dbr",
};

const ItemAffix suffixofStonefooting
{
    GeneratStat, Boots, 6, ofStonefooting
};

//of the dranghoul - all jewelry, belts
const ItemLvlName ofDraghoulTable[6]
{
	5, "records/items/lootaffixes/suffix/b_ar048_je.dbr",
	30, "records/items/lootaffixes/suffix/b_ar048_je_b.dbr",
	49, "records/items/lootaffixes/suffix/b_ar048_je_c.dbr",
	67, "records/items/lootaffixes/suffix/b_ar048_je_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar048_je_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar048_je_f.dbr",
};

const ItemAffix suffixOfDranghoul
{
    GeneratStat, AllJewelry | Belt, 6, ofDraghoulTable
};

//dranghoul - armor
//all armor no belt
//[18128]  s=records/items/lootaffixes/suffix/b_ar014_arje_f.dbr
const ItemLvlName ofDraghoulArmor[6]
{
    5, "records/items/lootaffixes/suffix/b_ar014_arje.dbr",
    30, "records/items/lootaffixes/suffix/b_ar014_arje_b.dbr",
    49, "records/items/lootaffixes/suffix/b_ar014_arje_c.dbr",
    67, "records/items/lootaffixes/suffix/b_ar014_arje_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar014_arje_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar014_arje_f.dbr",
};

const ItemAffix suffixOfDranghoulArmor
{
    GeneratStat, AllArmorNoBelt, 6, ofDraghoulArmor
};



//of butchery - all jewelry, belts
const ItemLvlName ofButchery[6]
{
	5, "records/items/lootaffixes/suffix/b_ar030_je.dbr",
	30, "records/items/lootaffixes/suffix/b_ar030_je_b.dbr",
	51, "records/items/lootaffixes/suffix/b_ar030_je_c.dbr",
	70, "records/items/lootaffixes/suffix/b_ar030_je_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar030_je_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar030_je_f.dbr",
};

const ItemAffix suffixOfButchery
{
	VitalityDamage | BleedDamage, AllJewelry | Belt, 6, ofButchery
};

//of supremacy - all jewelry, belts
const ItemLvlName ofSupermacy[6]
{
	5, "records/items/lootaffixes/suffix/b_ar027_je.dbr",
	30, "records/items/lootaffixes/suffix/b_ar027_je_b.dbr",
	49, "records/items/lootaffixes/suffix/b_ar027_je_c.dbr",
	67, "records/items/lootaffixes/suffix/b_ar027_je_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar027_je_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar027_je_f.dbr",
};

const ItemAffix suffixOfSupremacy
{
	PhysicalDamage, AllJewelry | Belt, 6, ofSupermacy
};

//of shadows - all jewelry, belts
const ItemLvlName ofShadows[6]
{
	5, "records/items/lootaffixes/suffix/b_ar028_je.dbr",
	30, "records/items/lootaffixes/suffix/b_ar028_je_b.dbr",
	49, "records/items/lootaffixes/suffix/b_ar028_je_c.dbr",
	67, "records/items/lootaffixes/suffix/b_ar028_je_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar028_je_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar028_je_f.dbr",
};

const ItemAffix suffixOfShadows
{
	ColdDamage | PierceDamage, AllJewelry | Belt, 6, ofShadows
};

//of scorched runes - all jewelry, belts, all armor
const ItemLvlName ofScorchedRunes[6]
{
	5,  "records/items/lootaffixes/suffix/b_ar104_ar_a.dbr",
	30, "records/items/lootaffixes/suffix/b_ar104_ar_b.dbr",
	50, "records/items/lootaffixes/suffix/b_ar104_ar_c.dbr",
	68, "records/items/lootaffixes/suffix/b_ar104_ar_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar104_ar_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar104_ar_f.dbr",
};

const ItemAffix suffixOfScorchedRunes
{
	ElementalDamage, AllJewelry | Belt | AllArmorNoBelt, 6, ofScorchedRunes
};

//of scorched ends - all jewelry, belts, all armor
const ItemLvlName ofScorchedEnds[6]
{
    22, "records/items/lootaffixes/suffix/b_ar033_ar.dbr",
    46, "records/items/lootaffixes/suffix/b_ar033_ar_b.dbr",
    60, "records/items/lootaffixes/suffix/b_ar033_ar_c.dbr",
    74, "records/items/lootaffixes/suffix/b_ar033_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar033_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar033_ar_f.dbr",
};

const ItemAffix suffixOfScorchedEnds
{
    FireDamage, AllJewelry | Belt | AllArmorNoBelt, 6, ofScorchedEnds
};

//of fallen skies - rings
const ItemLvlName ofFallenSkies[5]
{
	35, "records/items/lootaffixes/suffix/b_ar055_je_b.dbr",
	52, "records/items/lootaffixes/suffix/b_ar055_je_c.dbr",
	70, "records/items/lootaffixes/suffix/b_ar055_je_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar055_je_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar055_je_f.dbr",
};

const ItemAffix suffixOfFallenSkies
{
	ColdDamage | LightningDamage, Ring, 5, ofFallenSkies
};

//of squalls - all jewelry, belts, all armor
const ItemLvlName ofSqualls[6]
{
	22, "records/items/lootaffixes/suffix/b_ar040_ar.dbr",
	46, "records/items/lootaffixes/suffix/b_ar040_ar_b.dbr",
	60, "records/items/lootaffixes/suffix/b_ar040_ar_c.dbr",
	74, "records/items/lootaffixes/suffix/b_ar040_ar_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar040_ar_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar040_ar_f.dbr",
};

const ItemAffix suffixOfSqualls
{
	LightningDamage, AllJewelry | Belt | AllArmorNoBelt, 6, ofSqualls
};

//of attack - all jewelry, belts, gloves
const ItemLvlName ofAttack[8]
{
	5, "records/items/lootaffixes/suffix/a018b_ch_oa_01.dbr",
	10, "records/items/lootaffixes/suffix/a018b_ch_oa_02.dbr",
	18, "records/items/lootaffixes/suffix/a018b_ch_oa_03.dbr",
	26, "records/items/lootaffixes/suffix/a018b_ch_oa_04.dbr",
	38, "records/items/lootaffixes/suffix/a018b_ch_oa_05.dbr",
	55, "records/items/lootaffixes/suffix/a018b_ch_oa_06.dbr",
	85, "records/items/lootaffixes/suffix/a018b_ch_oa_07.dbr",
	90, "records/items/lootaffixes/suffix/a018b_ch_oa_08.dbr",
};

const ItemAffix suffixOfAttack
{
    GeneratStat, AllJewelry | Belt | Gloves, 8, ofAttack
};

//of arcane balance - all jewelry, belt, all armor
const ItemLvlName ofArcaneBalance[5]
{
	35, "records/items/lootaffixes/suffix/b_ar041_ar_b.dbr",
	52, "records/items/lootaffixes/suffix/b_ar041_ar_c.dbr",
	70, "records/items/lootaffixes/suffix/b_ar041_ar_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar041_ar_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar041_ar_f.dbr",
};

const ItemAffix suffixOfArcaneBalance
{
	ElementalDamage, AllJewelry | Belt | AllArmorNoBelt, 5, ofArcaneBalance
};

//of arcane blaze - all jewelry, belt, all armor
const ItemLvlName ofArcaneBlaze[5]
{
	35, "records/items/lootaffixes/suffix/b_ar042_ar_b.dbr",
	52, "records/items/lootaffixes/suffix/b_ar042_ar_c.dbr",
	70, "records/items/lootaffixes/suffix/b_ar042_ar_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar042_ar_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar042_ar_f.dbr",
};

const ItemAffix suffixOfArcaneBlaze
{
	FireDamage | AetherDamage, AllJewelry | Belt | AllArmorNoBelt, 5, ofArcaneBlaze
};

//of Maiven's Wit - lightn/aether dmg, spirit, elem/stun res
//all armor no belt
//[12932]  s=records/items/lootaffixes/suffix/b_ar038_ar_c.dbr
const ItemLvlName ofMaivensWit[6]
{
    5, "records/items/lootaffixes/suffix/b_ar038_ar.dbr",
    30, "records/items/lootaffixes/suffix/b_ar038_ar_b.dbr",
    50, "records/items/lootaffixes/suffix/b_ar038_ar_c.dbr",
    68, "records/items/lootaffixes/suffix/b_ar038_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar038_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar038_ar_f.dbr",
};

const ItemAffix suffixofMaivensWit
{
    LightningDamage | AetherDamage, AllArmorNoBelt, 6, ofMaivensWit
};

 //of insight - elem dmg, spirit, offen, chaos res
//all armor no belt
//[1912]  s=records/items/lootaffixes/suffix/b_ar032_ar_f.dbr
const ItemLvlName ofInsight[6]
{
    5, "records/items/lootaffixes/suffix/b_ar032_ar.dbr",
    30, "records/items/lootaffixes/suffix/b_ar032_ar_b.dbr",
    53, "records/items/lootaffixes/suffix/b_ar032_ar_c.dbr",
    70, "records/items/lootaffixes/suffix/b_ar032_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar032_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar032_ar_f.dbr",
};

const ItemAffix suffixofInsight
{
    ElementalDamage, AllArmorNoBelt, 6, ofInsight
};

//of soulwarding - all jewelry, belts, all armor
//it has phys/vit dmg but makes this general stat bc of aether resist
const ItemLvlName ofSoulWarding[6]
{
	5,  "records/items/lootaffixes/suffix/b_ar103_ar_a.dbr",
	30, "records/items/lootaffixes/suffix/b_ar103_ar_b.dbr",
	50, "records/items/lootaffixes/suffix/b_ar103_ar_c.dbr",
	68, "records/items/lootaffixes/suffix/b_ar103_ar_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar103_ar_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar103_ar_f.dbr",
};

const ItemAffix suffixOfSoulWarding
{
    GeneratStat, AllJewelry | Belt | AllArmorNoBelt, 6, ofSoulWarding
};

//of tormented souls - +2 hungering reach, vit/aether dmg, health, off
//all jewelfry, belts - specific for jewelry, others are specific to armor and a few wep types
//[15288]  s=records/items/lootaffixes/suffix/b_ar102_ar_a.dbr

//of blight - acidpois/vit dmg, off, pierce res
//all armor, all jewelry
//[8172]  s=records/items/lootaffixes/suffix/b_ar047_ar_b.dbr
//[18936]  s=records/items/lootaffixes/suffix/b_ar047_ar_e.dbr
const ItemLvlName OfBlightArmJewel[5]
{
    35, "records/items/lootaffixes/suffix/b_ar047_ar_b.dbr",
    50, "records/items/lootaffixes/suffix/b_ar047_ar_c.dbr",
    68, "records/items/lootaffixes/suffix/b_ar047_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar047_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar047_ar_f.dbr",
};

const ItemAffix suffixOfBlightArmJewel
{
    PoisAcidDamage, AllJewelry | AllArmorNoBelt | Belt, 5, OfBlightArmJewel
};

//of the cabal (jewelry)
//all armor, all jewelry
//[8432]  s=records/items/lootaffixes/suffix/b_ar046_ar_d.dbr
//[8432]  s=records/items/lootaffixes/suffix/b_ar046_ar_c.dbr
const ItemLvlName OfTheCabal[5]
{
    35, "records/items/lootaffixes/suffix/b_ar046_ar_b.dbr",
    52, "records/items/lootaffixes/suffix/b_ar046_ar_c.dbr",
    70, "records/items/lootaffixes/suffix/b_ar046_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar046_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar046_ar_f.dbr",
};

const ItemAffix suffixOfTheCabal
{
    VitalityDamage | ChaosDamage | PoisAcidDamage, AllJewelry | AllArmorNoBelt | Belt, 5, OfTheCabal
};

//of dreeg's gaze (armor)
//all armor no belt
//[8432]  s=records/items/lootaffixes/suffix/b_ar004_ar_c.dbr
const ItemLvlName OfDreegsGazeArmor[6]
{
    5, "records/items/lootaffixes/suffix/b_ar004_ar.dbr",
    30, "records/items/lootaffixes/suffix/b_ar004_ar_b.dbr",
    50, "records/items/lootaffixes/suffix/b_ar004_ar_c.dbr",
    68, "records/items/lootaffixes/suffix/b_ar004_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar004_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar004_ar_f.dbr",
};

const ItemAffix suffixOfDreegsGazeArmor
{
    PoisAcidDamage, AllArmorNoBelt, 6, OfDreegsGazeArmor
};

//of the slith - +2 black death, poisn/acid dmg, pierce/freeze res
//rings
//

//solael's malice (armor) - +2 second rite, vit/chaos dmg, off, elem res
//all armor no bels
//[14948]  s=records/items/lootaffixes/suffix/b_ar005_ar.dbr
const ItemLvlName OfSolaelsMaliceArmor[6]
{
    5, "records/items/lootaffixes/suffix/b_ar005_ar.dbr",
    30, "records/items/lootaffixes/suffix/b_ar005_ar_b.dbr",
    50, "records/items/lootaffixes/suffix/b_ar005_ar_c.dbr",
    68, "records/items/lootaffixes/suffix/b_ar005_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar005_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar005_ar_f.dbr",
};

const ItemAffix suffixOfSolaelsMaliceArmor
{
    ChaosDamage | VitalityDamage, AllArmorNoBelt, 6, OfSolaelsMaliceArmor
};

//of void harbinger - vit/chaos dmg, chaos/elem/freeze res
//all armor no belt
//[8276]  s=records/items/lootaffixes/suffix/b_ar025_ar_d.dbr
const ItemLvlName OfVoidHarbinger[6]
{
    5, "records/items/lootaffixes/suffix/b_ar025_ar.dbr",
    30, "records/items/lootaffixes/suffix/b_ar025_ar_b.dbr",
    50, "records/items/lootaffixes/suffix/b_ar025_ar_c.dbr",
    68, "records/items/lootaffixes/suffix/b_ar025_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar025_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar025_ar_f.dbr",
};

const ItemAffix suffixOfVoidHarbinger
{
    ChaosDamage | VitalityDamage, AllArmorNoBelt, 6, OfVoidHarbinger
};

//of shattered reality - aeth/chaos dmg, offen, chaos/freeze res
//all armor, all jewelry
//[8276]  s=records/items/lootaffixes/suffix/b_ar045_ar_d.dbr
const ItemLvlName OfShatteredReality[5]
{
    35, "records/items/lootaffixes/suffix/b_ar045_ar_b.dbr",
    52, "records/items/lootaffixes/suffix/b_ar045_ar_c.dbr",
    70, "records/items/lootaffixes/suffix/b_ar045_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar045_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar045_ar_f.dbr",
};

const ItemAffix suffixOfShatteredReality
{
    AetherDamage | ChaosDamage, AllArmorNoBelt | AllJewelry | Belt, 5, OfShatteredReality
};


//of blades - all armor no belt
const ItemLvlName ofBlades[6]
{
	22, "records/items/lootaffixes/suffix/b_ar012_to.dbr",
	39, "records/items/lootaffixes/suffix/b_ar012_to_b.dbr",
	53, "records/items/lootaffixes/suffix/b_ar012_to_c.dbr",
	70, "records/items/lootaffixes/suffix/b_ar012_to_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar012_to_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar012_to_f.dbr",
};


const ItemAffix suffixOfBlades
{
    RetaliationType, AllArmorNoBelt, 6, ofBlades
};

//of kings - all armor no belt
const ItemLvlName ofKings[6]
{
	22, "records/items/lootaffixes/suffix/b_ar035_ar.dbr",
	48, "records/items/lootaffixes/suffix/b_ar035_ar_b.dbr",
	60, "records/items/lootaffixes/suffix/b_ar035_ar_c.dbr",
	74, "records/items/lootaffixes/suffix/b_ar035_ar_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar035_ar_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar035_ar_f.dbr",
};

const ItemAffix suffixOfKings
{
    RetaliationType, AllArmorNoBelt, 6, ofKings
};

//of arcane winds - pants
const ItemLvlName ofArcaneWindsPants[6]
{
	5, "records/items/lootaffixes/suffix/b_ar061_ar.dbr",
	34, "records/items/lootaffixes/suffix/b_ar061_ar_b.dbr",
	52, "records/items/lootaffixes/suffix/b_ar061_ar_c.dbr",
	72, "records/items/lootaffixes/suffix/b_ar061_ar_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar061_ar_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar061_ar_f.dbr",
};

const ItemAffix suffixOfArcaneWindsPants
{
	GeneratStat, Pants, 6, ofArcaneWindsPants
};
//of arcane winds - boots
//[18448]  s=records/items/lootaffixes/suffix/b_ar056_ar_b.dbr
const ItemLvlName ofArcaneWindsBoots[6]
{
    5, "records/items/lootaffixes/suffix/b_ar056_ar.dbr",
    34, "records/items/lootaffixes/suffix/b_ar056_ar_b.dbr",
    52, "records/items/lootaffixes/suffix/b_ar056_ar_c.dbr",
    72, "records/items/lootaffixes/suffix/b_ar056_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar056_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar056_ar_f.dbr",
};

const ItemAffix suffixOfArcaneWindsBoots
{
    GeneratStat, Boots, 6, ofArcaneWindsBoots
};

//of the flesh hulk - all armor no belt
const ItemLvlName ofFleshHulk[6]
{
	5, "records/items/lootaffixes/suffix/b_ar024_ar.dbr",
	34, "records/items/lootaffixes/suffix/b_ar024_ar_b.dbr",
	52, "records/items/lootaffixes/suffix/b_ar024_ar_c.dbr",
	72, "records/items/lootaffixes/suffix/b_ar024_ar_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar024_ar_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar024_ar_f.dbr",
};

const ItemAffix suffixOfFleshHulk
{
    GeneratStat, AllArmorNoBelt, 6, ofFleshHulk
};

//of destruction - all armor no belt
const ItemLvlName ofDestruction[6]
{
	5, "records/items/lootaffixes/suffix/b_ar036_ar.dbr",
	30, "records/items/lootaffixes/suffix/b_ar036_ar_b.dbr",
	50, "records/items/lootaffixes/suffix/b_ar036_ar_c.dbr",
	68, "records/items/lootaffixes/suffix/b_ar036_ar_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar036_ar_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar036_ar_f.dbr",
};

const ItemAffix suffixOfDestruction
{
	FireDamage | LightningDamage, AllArmorNoBelt, 6, ofDestruction
};

//of reptilian resilience - pants
const ItemLvlName ofReptilianResilience[6]
{
	5, "records/items/lootaffixes/suffix/b_ar060_ar.dbr",
	34, "records/items/lootaffixes/suffix/b_ar060_ar_b.dbr",
	52, "records/items/lootaffixes/suffix/b_ar060_ar_c.dbr",
	72, "records/items/lootaffixes/suffix/b_ar060_ar_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar060_ar_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar060_ar_f.dbr",
};

const ItemAffix suffixOfReptilianResilience
{
    GeneratStat, Pants, 6, ofReptilianResilience
};

//of ulzuin's flame - all armor no belt
const ItemLvlName ofUlzuinsFlame[6]
{
	5, "records/items/lootaffixes/suffix/b_ar003_ar.dbr",
	30, "records/items/lootaffixes/suffix/b_ar003_ar_b.dbr",
	49, "records/items/lootaffixes/suffix/b_ar003_ar_c.dbr",
	70, "records/items/lootaffixes/suffix/b_ar003_ar_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar003_ar_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar003_ar_f.dbr",
};

const ItemAffix suffixOfUlzuinsFlame
{
	FireDamage, AllArmorNoBelt, 6, ofUlzuinsFlame
};

//of amarasta's flurry - all armor no belt
const ItemLvlName ofAmarastasFlurry[6]
{
	5, "records/items/lootaffixes/suffix/b_ar037_ar.dbr",
	30, "records/items/lootaffixes/suffix/b_ar037_ar_b.dbr",
	50, "records/items/lootaffixes/suffix/b_ar037_ar_c.dbr",
	68, "records/items/lootaffixes/suffix/b_ar037_ar_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar037_ar_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar037_ar_f.dbr",
};

const ItemAffix suffixOfAmarastasFlurry
{
	ColdDamage | PierceDamage, AllArmorNoBelt, 6, ofAmarastasFlurry
};

//of balanced steel - all armor no belt
const ItemLvlName ofBalancedSteel[6]
{
	5, "records/items/lootaffixes/suffix/b_ar026_ar.dbr",
	30, "records/items/lootaffixes/suffix/b_ar026_ar_b.dbr",
	47, "records/items/lootaffixes/suffix/b_ar026_ar_c.dbr",
	67, "records/items/lootaffixes/suffix/b_ar026_ar_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar026_ar_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar026_ar_f.dbr",
};

//include as general stat bc of extra dmg and resists
const ItemAffix suffixOfBalancedSteel
{
    GeneratStat | PierceDamage, AllArmorNoBelt, 6, ofBalancedSteel
};

//of incantations - all armor no belt
const ItemLvlName ofIncantations[6]
{
	5, "records/items/lootaffixes/suffix/b_ar031_ar.dbr",
	30, "records/items/lootaffixes/suffix/b_ar031_ar_b.dbr",
	49, "records/items/lootaffixes/suffix/b_ar031_ar_c.dbr",
	67, "records/items/lootaffixes/suffix/b_ar031_ar_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar031_ar_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar031_ar_f.dbr",
};

const ItemAffix suffixOfIncantations
{
	GeneratStat, AllArmorNoBelt, 6, ofIncantations
};

//of vengence - shields
const ItemLvlName ofVengence[7]
{
	5, "records/items/lootaffixes/suffix/b_sh014_a.dbr",
	24, "records/items/lootaffixes/suffix/b_sh014_b.dbr",
	41, "records/items/lootaffixes/suffix/b_sh014_c.dbr",
	55, "records/items/lootaffixes/suffix/b_sh014_d.dbr",
	70, "records/items/lootaffixes/suffix/b_sh014_e.dbr",
	82, "records/items/lootaffixes/suffix/b_sh014_f.dbr",
	92, "records/items/lootaffixes/suffix/b_sh014_g.dbr",
};

const ItemAffix suffixOfVengence
{
    GeneratStat | RetaliationType, Shield, 7, ofVengence
};

//of conflagration - shields
const ItemLvlName ofConflagrationShield[7]
{
	5, "records/items/lootaffixes/suffix/b_sh042_a.dbr",
	24, "records/items/lootaffixes/suffix/b_sh042_b.dbr",
	39, "records/items/lootaffixes/suffix/b_sh042_c.dbr",
	53, "records/items/lootaffixes/suffix/b_sh042_d.dbr",
	70, "records/items/lootaffixes/suffix/b_sh042_e.dbr",
	82, "records/items/lootaffixes/suffix/b_sh042_f.dbr",
	92, "records/items/lootaffixes/suffix/b_sh042_g.dbr",
};

const ItemAffix suffixOfConflagrationShield
{
	FireDamage | RetaliationType, Shield, 7, ofConflagrationShield
};

//of immortality - shields
const ItemLvlName ofImmortality[7]
{
	20, "records/items/lootaffixes/suffix/b_sh032_a.dbr",
	37, "records/items/lootaffixes/suffix/b_sh032_b.dbr",
	46, "records/items/lootaffixes/suffix/b_sh032_c.dbr",
	60, "records/items/lootaffixes/suffix/b_sh032_d.dbr",
	74, "records/items/lootaffixes/suffix/b_sh032_e.dbr",
	82, "records/items/lootaffixes/suffix/b_sh032_f.dbr",
	92, "records/items/lootaffixes/suffix/b_sh032_g.dbr",
};

const ItemAffix suffixOfImmortality
{
    GeneratStat, Shield, 7, ofImmortality
};

//of blight - shields
const ItemLvlName ofBlightShield[7]
{
	5, "records/items/lootaffixes/suffix/b_sh043_a.dbr",
	24, "records/items/lootaffixes/suffix/b_sh043_b.dbr",
	39, "records/items/lootaffixes/suffix/b_sh043_c.dbr",
	53, "records/items/lootaffixes/suffix/b_sh043_d.dbr",
	70, "records/items/lootaffixes/suffix/b_sh043_e.dbr",
	82, "records/items/lootaffixes/suffix/b_sh043_f.dbr",
	92, "records/items/lootaffixes/suffix/b_sh043_g.dbr",
};

const ItemAffix suffixOfBlightShield
{
	PoisAcidDamage | RetaliationType, Shield, 7, ofBlightShield
};

//of the guardian - shields
const ItemLvlName ofTheGuardian[7]
{
	20, "records/items/lootaffixes/suffix/b_sh016_a.dbr",
	36, "records/items/lootaffixes/suffix/b_sh016_b.dbr",
	46, "records/items/lootaffixes/suffix/b_sh016_c.dbr",
	60, "records/items/lootaffixes/suffix/b_sh016_d.dbr",
	74, "records/items/lootaffixes/suffix/b_sh016_e.dbr",
	82, "records/items/lootaffixes/suffix/b_sh016_f.dbr",
	92, "records/items/lootaffixes/suffix/b_sh016_g.dbr",
};

const ItemAffix suffixOfTheGuardian
{
    GeneratStat, Shield, 7, ofTheGuardian
};


//of wildfire - shields
const ItemLvlName ofWildFire[7]
{
	5, "records/items/lootaffixes/suffix/b_sh017_a.dbr",
	24, "records/items/lootaffixes/suffix/b_sh017_b.dbr",
	39, "records/items/lootaffixes/suffix/b_sh017_c.dbr",
	53, "records/items/lootaffixes/suffix/b_sh017_d.dbr",
	70, "records/items/lootaffixes/suffix/b_sh017_e.dbr",
	82, "records/items/lootaffixes/suffix/b_sh017_f.dbr",
	92, "records/items/lootaffixes/suffix/b_sh017_g.dbr",
};

const ItemAffix suffixOfWildFire
{
	FireDamage, Shield, 7, ofWildFire
};

// of redoubt - shield
const ItemLvlName ofRedoubt[7]
{
	22, "records/items/lootaffixes/suffix/b_sh001_a.dbr",
	37, "records/items/lootaffixes/suffix/b_sh001_b.dbr",
	46, "records/items/lootaffixes/suffix/b_sh001_c.dbr",
	60, "records/items/lootaffixes/suffix/b_sh001_d.dbr",
	74, "records/items/lootaffixes/suffix/b_sh001_e.dbr",
	82, "records/items/lootaffixes/suffix/b_sh001_f.dbr",
	92, "records/items/lootaffixes/suffix/b_sh001_g.dbr",
};

const ItemAffix suffixOfRedoubt
{
    GeneratStat, Shield, 7, ofRedoubt
};

//of menhir's wall - shield
const ItemLvlName ofMenhirsWall[7]
{
	5, "records/items/lootaffixes/suffix/b_sh021_a.dbr",
	24, "records/items/lootaffixes/suffix/b_sh021_b.dbr",
	43, "records/items/lootaffixes/suffix/b_sh021_c.dbr",
	57, "records/items/lootaffixes/suffix/b_sh021_d.dbr",
	74, "records/items/lootaffixes/suffix/b_sh021_e.dbr",
	82, "records/items/lootaffixes/suffix/b_sh021_f.dbr",
	92, "records/items/lootaffixes/suffix/b_sh021_g.dbr",
};

const ItemAffix suffixOfMenhirsWall
{
    GeneratStat, Shield, 7, ofMenhirsWall
};

//of imposing presence
const ItemLvlName ofImposingPresence[7]
{
	5, "records/items/lootaffixes/suffix/b_sh106_a.dbr",
	26, "records/items/lootaffixes/suffix/b_sh106_b.dbr",
	41, "records/items/lootaffixes/suffix/b_sh106_c.dbr",
	55, "records/items/lootaffixes/suffix/b_sh106_d.dbr",
	70, "records/items/lootaffixes/suffix/b_sh106_e.dbr",
	82, "records/items/lootaffixes/suffix/b_sh106_f.dbr",
	92, "records/items/lootaffixes/suffix/b_sh106_g.dbr",
};

const ItemAffix suffixOfImposingPresence
{
    GeneratStat, Shield, 7, ofImposingPresence
};

//of the glacier
//shields
//[25436]  s=records/items/lootaffixes/suffix/b_sh044_g.dbr
const ItemLvlName ofTheGlacier[7]
{
    5, "records/items/lootaffixes/suffix/b_sh044_a.dbr",
    24, "records/items/lootaffixes/suffix/b_sh044_b.dbr",
    39, "records/items/lootaffixes/suffix/b_sh044_c.dbr",
    53, "records/items/lootaffixes/suffix/b_sh044_d.dbr",
    70, "records/items/lootaffixes/suffix/b_sh044_e.dbr",
    82, "records/items/lootaffixes/suffix/b_sh044_f.dbr",
    92, "records/items/lootaffixes/suffix/b_sh044_g.dbr",
};

const ItemAffix suffixofTheGlacier
{
    ColdDamage, Shield, 7, ofTheGlacier
};

//of arcane barriers
//shields
//[1988]  s=records/items/lootaffixes/suffix/b_sh105_g.dbr
const ItemLvlName ofArcaneBarriers[7]
{
    5, "records/items/lootaffixes/suffix/b_sh105_a.dbr",
    26, "records/items/lootaffixes/suffix/b_sh105_b.dbr",
    41, "records/items/lootaffixes/suffix/b_sh105_c.dbr",
    55, "records/items/lootaffixes/suffix/b_sh105_d.dbr",
    70, "records/items/lootaffixes/suffix/b_sh105_e.dbr",
    82, "records/items/lootaffixes/suffix/b_sh105_f.dbr",
    92, "records/items/lootaffixes/suffix/b_sh105_g.dbr",
};

const ItemAffix suffixofArcaneBarriers
{
    AetherDamage, Shield, 7, ofArcaneBarriers
};

 
//of vicious barbs - all armor no belt
const ItemLvlName ofViciousBarbs[6]
{
	5, "records/items/lootaffixes/suffix/b_ar029_je.dbr",
	30, "records/items/lootaffixes/suffix/b_ar029_je_b.dbr",
	51, "records/items/lootaffixes/suffix/b_ar029_je_c.dbr",
	70, "records/items/lootaffixes/suffix/b_ar029_je_d.dbr",
	82, "records/items/lootaffixes/suffix/b_ar029_je_e.dbr",
	92, "records/items/lootaffixes/suffix/b_ar029_je_f.dbr",
};

const ItemAffix suffixOfViciousBarbs
{
    GeneratStat, AllArmorNoBelt, 6, ofViciousBarbs
};

//of battler fury - phy/intern dmg, 100 off, pierce/entrap res
//gloves
//[7816]  s=records/items/lootaffixes/suffix/b_ar068_ar_f.dbr
const ItemLvlName BattleFury[6]
{
    5, "records/items/lootaffixes/suffix/b_ar068_ar.dbr",
    34, "records/items/lootaffixes/suffix/b_ar068_ar_b.dbr",
    52, "records/items/lootaffixes/suffix/b_ar068_ar_c.dbr",
    72, "records/items/lootaffixes/suffix/b_ar068_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar068_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar068_ar_f.dbr",
};

const ItemAffix suffixBattleFury
{
    PhysicalDamage, Gloves, 6, BattleFury
};

//oleron's wrath - +2 fighting form, phy/it dmg, physique, offen, pierce/aether res
//[17252]  s=records/items/lootaffixes/suffix/b_ar006_ar.dbr
//all armor no belt
const ItemLvlName OleronsWrathArmor[6]
{
    5, "records/items/lootaffixes/suffix/b_ar006_ar.dbr",
    30, "records/items/lootaffixes/suffix/b_ar006_ar_b.dbr",
    49, "records/items/lootaffixes/suffix/b_ar006_ar_c.dbr",
    67, "records/items/lootaffixes/suffix/b_ar006_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar006_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar006_ar_f.dbr",
};

const ItemAffix suffixOleronsWrathArmor
{
    PhysicalDamage, AllArmorNoBelt, 6, OleronsWrathArmor
};

//of winter storm
//all armor, all jewelry
//[24420]  s=records/items/lootaffixes/suffix/b_ar039_ar.dbr
const ItemLvlName WinterStorm[6]
{
    22, "records/items/lootaffixes/suffix/b_ar039_ar.dbr",
    46, "records/items/lootaffixes/suffix/b_ar039_ar_b.dbr",
    60, "records/items/lootaffixes/suffix/b_ar039_ar_c.dbr",
    74, "records/items/lootaffixes/suffix/b_ar039_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar039_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar039_ar_f.dbr",
};

const ItemAffix suffixWinterStorm
{
    ColdDamage, AllArmorNoBelt | AllJewelry | Belt, 6, WinterStorm
};

//of stone fists
//gloves
//[22840]  s=records/items/lootaffixes/suffix/b_ar070_ar.dbr
const ItemLvlName OfStoneFists[6]
{
    5, "records/items/lootaffixes/suffix/b_ar070_ar.dbr",
    34, "records/items/lootaffixes/suffix/b_ar070_ar_b.dbr",
    52, "records/items/lootaffixes/suffix/b_ar070_ar_c.dbr",
    72, "records/items/lootaffixes/suffix/b_ar070_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar070_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar070_ar_f.dbr",
};

const ItemAffix suffixOfStoneFists
{
    GeneratStat, Gloves, 6, OfStoneFists
};

//of the untamed - health, offensive ability
//[11300]  s=records/items/lootaffixes/suffix/b_ar016_je_e.dbr

//of mending (magic)
//+95 health regen at L90
//[11300]  s=records/items/lootaffixes/suffix/a041b_ch_healthregen_09.dbr

//rapid reflexes - +51 cunning, 13% attk speed, 10% casting speed, pierce/stun resist
//gloves
//[17252]  s=records/items/lootaffixes/suffix/b_ar062_ar.dbr

//of elements
//
//[23644]  s=records/items/lootaffixes/suffix/a086b_off_dmg%elemental_08_je.dbr

//of the wild - +3 summon briar thorn, def, elem res, pet bonuses
//all jewelry, belt
//[18668]  s=records/items/lootaffixes/suffix/b_ar015_je.dbr
const ItemLvlName OfTheWildJewel[6]
{
    5, "records/items/lootaffixes/suffix/b_ar015_je.dbr",
    30, "records/items/lootaffixes/suffix/b_ar015_je_b.dbr",
    49, "records/items/lootaffixes/suffix/b_ar015_je_c.dbr",
    67, "records/items/lootaffixes/suffix/b_ar015_je_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar015_je_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar015_je_f.dbr",
};

const ItemAffix suffixOftheWildJewel
{
    PetType, AllJewelry | Belt, 6, OfTheWildJewel
};

//of the wild - +3 emboldening presence, def, elem res, pet bonuses
//all armor no belt
//[17952]  s=records/items/lootaffixes/suffix/b_ar071_ar_f.dbr
const ItemLvlName OfTheWildArmor[6]
{
    5, "records/items/lootaffixes/suffix/b_ar071_ar.dbr",
    30, "records/items/lootaffixes/suffix/b_ar071_ar_b.dbr",
    49, "records/items/lootaffixes/suffix/b_ar071_ar_c.dbr",
    67, "records/items/lootaffixes/suffix/b_ar071_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar071_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar071_ar_f.dbr",
};

const ItemAffix suffixOfTheWildArmor
{
    PetType, AllArmorNoBelt, 6, OfTheWildArmor
};


//of caged souls - +3 summon blight fiend, helath, bleed res, pet bonuses
//all armor no belt
//[18668]  s=records/items/lootaffixes/suffix/b_ar105_ar_c.dbr
const ItemLvlName OfCagedSoulsArmor[6]
{
    5, "records/items/lootaffixes/suffix/b_ar105_ar.dbr",
    30, "records/items/lootaffixes/suffix/b_ar105_ar_b.dbr",
    50, "records/items/lootaffixes/suffix/b_ar105_ar_c.dbr",
    68, "records/items/lootaffixes/suffix/b_ar105_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar105_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar105_ar_f.dbr",
};

const ItemAffix suffixOfCagedSoulsArmor
{
    PetType, AllArmorNoBelt, 6, OfCagedSoulsArmor
};

//of caged souls - +3 raise skeles, bleed res, pet bonuses (100% dmg, freeze res)
//all jewelry, belt
//[19572]  s=records/items/lootaffixes/suffix/b_ar106_ar_d.dbr
const ItemLvlName OfCagedSoulsJewel[6]
{
    5, "records/items/lootaffixes/suffix/b_ar106_ar.dbr",
    30, "records/items/lootaffixes/suffix/b_ar106_ar_b.dbr",
    50, "records/items/lootaffixes/suffix/b_ar106_ar_c.dbr",
    68, "records/items/lootaffixes/suffix/b_ar106_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar106_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar106_ar_f.dbr",
};

const ItemAffix suffixOfCagedSoulsJewel
{
    PetType, AllJewelry | Belt, 6, OfCagedSoulsJewel
};


//of the untamed - +3 summon familiar, health, offen, aether, pet bonuses
//all armor no belt
//[18668]  s=records/items/lootaffixes/suffix/b_ar072_ar_d.dbr
const ItemLvlName OfTheUntamedArmor[6]
{
    5, "records/items/lootaffixes/suffix/b_ar072_ar.dbr",
    30, "records/items/lootaffixes/suffix/b_ar072_ar_b.dbr",
    50, "records/items/lootaffixes/suffix/b_ar072_ar_c.dbr",
    68, "records/items/lootaffixes/suffix/b_ar072_ar_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar072_ar_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar072_ar_f.dbr",
};

const ItemAffix suffixOfTheUntamedArmor
{
    PetType, AllArmorNoBelt, 6, OfTheUntamedArmor
};

//of the untamed - +3 summon familiar, health, offen, aether, pet bonuses
//all jewelry, belt
//[18668]  s=records/items/lootaffixes/suffix/b_ar016_je_b.dbr
const ItemLvlName OfTheUntamedJewel[6]
{
    22, "records/items/lootaffixes/suffix/b_ar016_je.dbr",
    42, "records/items/lootaffixes/suffix/b_ar016_je_b.dbr",
    56, "records/items/lootaffixes/suffix/b_ar016_je_c.dbr",
    70, "records/items/lootaffixes/suffix/b_ar016_je_d.dbr",
    82, "records/items/lootaffixes/suffix/b_ar016_je_e.dbr",
    92, "records/items/lootaffixes/suffix/b_ar016_je_f.dbr",
};

const ItemAffix suffixOfTheUntamedJewel
{
    PetType, AllJewelry | Belt, 6, OfTheUntamedJewel
};

//-------------------------------------
//1h wep
//-------------------------------------
//of ferocity - +2 savagery, lightn dmg, offense, attk/movement spd
//swords, axes, maces, 1h-ranged, scepters
//5, 24, 40, 56, 74, 82, 92
//[14028]  s=records/items/lootaffixes/suffix/b_wpn014_melee1h_b.dbr
const ItemLvlName OfFerocity[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn014_melee1h_a.dbr",
    24, "records/items/lootaffixes/suffix/b_wpn014_melee1h_b.dbr",
    40, "records/items/lootaffixes/suffix/b_wpn014_melee1h_c.dbr",
    56, "records/items/lootaffixes/suffix/b_wpn014_melee1h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn014_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn014_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn014_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfFerocity
{
    LightningDamage, Melee1h | Range1h, 7, OfFerocity
};

//of shattering - +2 olexra's flash frz, cold, cold/frost% dmg, attk spd
//1h wep
//[23220]  s=records/items/lootaffixes/suffix/b_wpn019_melee1h_g.dbr
const ItemLvlName OfShattering[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn019_melee1h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn019_melee1h_b.dbr",
    40, "records/items/lootaffixes/suffix/b_wpn019_melee1h_c.dbr",
    54, "records/items/lootaffixes/suffix/b_wpn019_melee1h_d.dbr",
    70, "records/items/lootaffixes/suffix/b_wpn019_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn019_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn019_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfShattering
{
    ColdDamage, Melee1h | Range1h, 7, OfShattering
};

//of torrents - +2 storm totem, lightn dmg, crit dmg, cast sped
//1h wep
//[23220]  s=records/items/lootaffixes/suffix/b_wpn018_melee1h_g.dbr
const ItemLvlName OfTorrents[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn018_melee1h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn018_melee1h_b.dbr",
    41, "records/items/lootaffixes/suffix/b_wpn018_melee1h_c.dbr",
    55, "records/items/lootaffixes/suffix/b_wpn018_melee1h_d.dbr",
    70, "records/items/lootaffixes/suffix/b_wpn018_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn018_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn018_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfTorrents
{
    LightningDamage, Melee1h | Range1h, 7, OfTorrents
};

//of wildfire
//1h wep
//[25472]  s=records/items/lootaffixes/suffix/b_wpn017_melee1h_b.dbr
const ItemLvlName OfWildfire[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn017_melee1h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn017_melee1h_b.dbr",
    39, "records/items/lootaffixes/suffix/b_wpn017_melee1h_c.dbr",
    53, "records/items/lootaffixes/suffix/b_wpn017_melee1h_d.dbr",
    68, "records/items/lootaffixes/suffix/b_wpn017_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn017_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn017_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfWildfire
{
    FireDamage, Melee1h | Range1h, 7, OfWildfire
};

//of conflagration
//1h wep
//[25472]  s=records/items/lootaffixes/suffix/b_wpn001_melee1h_c.dbr
const ItemLvlName OfConflagration[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn001_melee1h_a.dbr",
    24, "records/items/lootaffixes/suffix/b_wpn001_melee1h_b.dbr",
    39, "records/items/lootaffixes/suffix/b_wpn001_melee1h_c.dbr",
    53, "records/items/lootaffixes/suffix/b_wpn001_melee1h_d.dbr",
    68, "records/items/lootaffixes/suffix/b_wpn001_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn001_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn001_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfConflagration
{
    FireDamage, Melee1h | Range1h, 7, OfConflagration
};

//of the flamecaller
//1h wep
//[25472]  s=records/items/lootaffixes/suffix/b_wpn032_melee1h_b.dbr
const ItemLvlName OfFlamecaller[6]
{
    35, "records/items/lootaffixes/suffix/b_wpn032_melee1h_b.dbr",  
    48, "records/items/lootaffixes/suffix/b_wpn032_melee1h_c.dbr",
    60, "records/items/lootaffixes/suffix/b_wpn032_melee1h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn032_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn032_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn032_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfFlamecaller
{
    FireDamage, Melee1h | Range1h, 6, OfFlamecaller
};

//of slaughter
//1hwep: pierce/bleed, offense, +2 ring of steel
//[19248]  s=records/items/lootaffixes/suffix/b_wpn015_melee1h_c.dbr
const ItemLvlName Wep1hOfSlaughter[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn015_melee1h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn015_melee1h_b.dbr",
    43, "records/items/lootaffixes/suffix/b_wpn015_melee1h_c.dbr",
    57, "records/items/lootaffixes/suffix/b_wpn015_melee1h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn015_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn015_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn015_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfSlaughter
{
    PierceDamage | BleedDamage, Melee1h | Range1h, 6, Wep1hOfSlaughter
};

//of annihilation - +2 dev swarm, vit/bleed dmg, spirit, cast spd
//1h wep
//[6716]  s=records/items/lootaffixes/suffix/b_wpn023_melee1h_g.dbr
const ItemLvlName OfAnnihilation[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn023_melee1h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn023_melee1h_b.dbr",
    43, "records/items/lootaffixes/suffix/b_wpn023_melee1h_c.dbr",
    57, "records/items/lootaffixes/suffix/b_wpn023_melee1h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn023_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn023_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn023_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfAnnihilation
{
    BleedDamage | VitalityDamage, Melee1h | Range1h, 7, OfAnnihilation
};


//of cruelty - +2 fighting form, flat bleed, bleed+duration%, offen
//1h wep
//[6716]  s=records/items/lootaffixes/suffix/b_wpn010_melee1h_g.dbr
const ItemLvlName OfCruelty[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn010_melee1h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn010_melee1h_b.dbr",
    40, "records/items/lootaffixes/suffix/b_wpn010_melee1h_c.dbr",
    54, "records/items/lootaffixes/suffix/b_wpn010_melee1h_d.dbr",
    70, "records/items/lootaffixes/suffix/b_wpn010_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn010_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn010_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfCruelty
{
    BleedDamage, Melee1h | Range1h, 7, OfCruelty
};

//of abomination - +2 ascension, phys/aeth dmg, phys, offen
//1h wep
//[19556]  s=records/items/lootaffixes/suffix/b_wpn022_melee1h_d.dbr
const ItemLvlName OfAbomination[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn022_melee1h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn022_melee1h_b.dbr",
    39, "records/items/lootaffixes/suffix/b_wpn022_melee1h_c.dbr",
    53, "records/items/lootaffixes/suffix/b_wpn022_melee1h_d.dbr",
    68, "records/items/lootaffixes/suffix/b_wpn022_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn022_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn022_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfAbomination
{
    AetherDamage | PhysicalDamage, Melee1h | Range1h, 7, OfAbomination
};

//of ruthlessness - pierce dmg, dmg to humans, cunning, atk spd
//1h wep
//[16732]  s=records/items/lootaffixes/suffix/b_wpn011_melee1h_b.dbr
const ItemLvlName OfRuthlessness[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn011_melee1h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn011_melee1h_b.dbr",
    43, "records/items/lootaffixes/suffix/b_wpn011_melee1h_c.dbr",
    57, "records/items/lootaffixes/suffix/b_wpn011_melee1h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn011_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn011_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn011_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfRuthlessness
{
    PierceDamage, Melee1h | Range1h, 7, OfRuthlessness
};

//of the slayer- +2 night chill, pierce/crit, atk spd
//
//[16732]  s=records/items/lootaffixes/suffix/b_wpn006_melee1h_b.dbr
const ItemLvlName OfSlayer[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn006_melee1h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn006_melee1h_b.dbr",
    43, "records/items/lootaffixes/suffix/b_wpn006_melee1h_c.dbr",
    57, "records/items/lootaffixes/suffix/b_wpn006_melee1h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn006_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn006_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn006_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfSlayer
{
    PierceDamage, Melee1h | Range1h, 7, OfSlayer
};

//of voracity - +2 reaping strike, vit dmg, attk to hp, hp, atk spd
//1h wep
//[19600]  s=records/items/lootaffixes/suffix/b_wpn007_melee1h_b.dbr
const ItemLvlName OfVoracity[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn007_melee1h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn007_melee1h_b.dbr",
    43, "records/items/lootaffixes/suffix/b_wpn007_melee1h_c.dbr",
    57, "records/items/lootaffixes/suffix/b_wpn007_melee1h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn007_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn007_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn007_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfVoracity
{
    VitalityDamage, Melee1h | Range1h, 7, OfVoracity
};

//of the cabal
//1h wep
//[7256]  s=records/items/lootaffixes/suffix/b_wpn038_melee1h_g.dbr
const ItemLvlName OfTheCabal1hWep[6]
{
    35, "records/items/lootaffixes/suffix/b_wpn038_melee1h_b.dbr",
    48, "records/items/lootaffixes/suffix/b_wpn038_melee1h_c.dbr",
    60, "records/items/lootaffixes/suffix/b_wpn038_melee1h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn038_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn038_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn038_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfTheCabal
{
    VitalityDamage | ChaosDamage, Melee1h | Range1h, 6, OfTheCabal1hWep
};

//of shattered reality
//1h wep
//[7256]  s=records/items/lootaffixes/suffix/b_wpn037_melee1h_g.dbr
const ItemLvlName OfShatteredReality1hWep[6]
{
    35, "records/items/lootaffixes/suffix/b_wpn037_melee1h_b.dbr",
    48, "records/items/lootaffixes/suffix/b_wpn037_melee1h_c.dbr",
    60, "records/items/lootaffixes/suffix/b_wpn037_melee1h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn037_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn037_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn037_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfShatteredReality
{
    AetherDamage | ChaosDamage, Melee1h | Range1h, 6, OfShatteredReality1hWep
};

//of solael's malice
//1h wep
//[7256]  s=records/items/lootaffixes/suffix/b_wpn036_melee1h_g.dbr
const ItemLvlName OfSolaelsMalice1hWep[6]
{
    35, "records/items/lootaffixes/suffix/b_wpn036_melee1h_b.dbr",
    48, "records/items/lootaffixes/suffix/b_wpn036_melee1h_c.dbr",
    60, "records/items/lootaffixes/suffix/b_wpn036_melee1h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn036_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn036_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn036_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfSolaelsMalice
{
    VitalityDamage | ChaosDamage, Melee1h | Range1h, 6, OfSolaelsMalice1hWep
};

//of the abyss
//1h wep
//[22468]  s=records/items/lootaffixes/suffix/b_wpn004_melee1h_a.dbr
const ItemLvlName OfTheAbyss[7]
{
    16, "records/items/lootaffixes/suffix/b_wpn004_melee1h_a.dbr",
    30, "records/items/lootaffixes/suffix/b_wpn004_melee1h_b.dbr",
    46, "records/items/lootaffixes/suffix/b_wpn004_melee1h_c.dbr",
    60, "records/items/lootaffixes/suffix/b_wpn004_melee1h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn004_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn004_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn004_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfTheAbyss
{
    ChaosDamage, Melee1h | Range1h, 7, OfTheAbyss
};

//of the venomclaw
//all 1h wep: acid/pos, offense, attk speed
//[10268]  s=records/items/lootaffixes/suffix/b_wpn021_melee1h_e.dbr
const ItemLvlName OfTheVenomClaw[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn021_melee1h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn021_melee1h_b.dbr",
    41, "records/items/lootaffixes/suffix/b_wpn021_melee1h_c.dbr",
    55, "records/items/lootaffixes/suffix/b_wpn021_melee1h_d.dbr",
    70, "records/items/lootaffixes/suffix/b_wpn021_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn021_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn021_melee1h_g.dbr",
};

const ItemAffix suffixWep1hOfTheVenomClaw
{
    PoisAcidDamage, Melee1h | Range1h, 7, OfTheVenomClaw
};

//of fury
//wep2h: all dmg, atk/cast speed, offense
//[15908]  s=records/items/lootaffixes/suffix/b_wpn013_melee2h_b.dbr
const ItemLvlName Wep2hOfFury[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn013_melee2h_a.dbr",
    24, "records/items/lootaffixes/suffix/b_wpn013_melee2h_b.dbr",
    39, "records/items/lootaffixes/suffix/b_wpn013_melee2h_c.dbr",
    53, "records/items/lootaffixes/suffix/b_wpn013_melee2h_d.dbr",
    69, "records/items/lootaffixes/suffix/b_wpn013_melee2h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn013_melee2h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn013_melee2h_g.dbr",
};

const ItemAffix suffixWep2hOfFury
{
    AllDamage, Melee2h | Range2h, 7, Wep2hOfFury
};

//of wildfire
//wep2h: fire dmg, crit, atk/cast speed, +4 flames of ignaffar
//[272]  s=records/items/lootaffixes/suffix/b_wpn017_melee2h_d.dbr
const ItemLvlName Wep2hOfWildfire[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn017_melee2h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn017_melee2h_b.dbr",
    39, "records/items/lootaffixes/suffix/b_wpn017_melee2h_c.dbr",
    53, "records/items/lootaffixes/suffix/b_wpn017_melee2h_d.dbr",
    68, "records/items/lootaffixes/suffix/b_wpn017_melee2h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn017_melee2h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn017_melee2h_g.dbr",
};

const ItemAffix suffixWep2hOfWildfire
{
    FireDamage, Melee2h | Range2h, 7, Wep2hOfWildfire
};

//of ferocity
//wep2h: lightning offense, atk speed, movement, +4 savagery
//[272]  s=records/items/lootaffixes/suffix/b_wpn014_melee2h_c.dbr
const ItemLvlName Wep2hOfFerocity[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn014_melee2h_a.dbr",
    24, "records/items/lootaffixes/suffix/b_wpn014_melee2h_b.dbr",
    40, "records/items/lootaffixes/suffix/b_wpn014_melee2h_c.dbr",
    56, "records/items/lootaffixes/suffix/b_wpn014_melee2h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn014_melee2h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn014_melee2h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn014_melee2h_g.dbr",
};

const ItemAffix suffixWep2hOfFerocity
{
    LightningDamage, Melee2h | Range2h, 7, Wep2hOfFerocity
};

//of venomclaw
//wep2h: poison/acid dmg, offense, atk speed, +4 lethal assault
//[272]  s=records/items/lootaffixes/suffix/b_wpn021_melee2h_d.dbr
const ItemLvlName Wep2hOfVenomclaw[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn021_melee2h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn021_melee2h_b.dbr",
    41, "records/items/lootaffixes/suffix/b_wpn021_melee2h_c.dbr",
    50, "records/items/lootaffixes/suffix/b_wpn021_melee2h_d.dbr",
    70, "records/items/lootaffixes/suffix/b_wpn021_melee2h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn021_melee2h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn021_melee2h_g.dbr",
};

const ItemAffix suffixWep2hOfVenomclaw
{
    PoisAcidDamage, Melee2h | Range2h, 7, Wep2hOfVenomclaw
};

//of annihilation
//wep2h: vit/bleed dmg, cast speed, +4 devouring swarm
//[272]  s=records/items/lootaffixes/suffix/b_wpn021_melee2h_d.dbr
const ItemLvlName Wep2hOfAnnihilation[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn021_melee2h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn021_melee2h_b.dbr",
    41, "records/items/lootaffixes/suffix/b_wpn021_melee2h_c.dbr",
    50, "records/items/lootaffixes/suffix/b_wpn021_melee2h_d.dbr",
    70, "records/items/lootaffixes/suffix/b_wpn021_melee2h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn021_melee2h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn021_melee2h_g.dbr",
};

const ItemAffix suffixWep2hOfAnnihilation
{
    VitalityDamage | BleedDamage, Melee2h | Range2h, 7, Wep2hOfAnnihilation
};

//of torrents
//wep2h: lightning dmg, crit, cast speed, +4 storm totem
//[272]  s=records/items/lootaffixes/suffix/b_wpn018_melee2h_b.dbr
const ItemLvlName Wep2hOfTorrents[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn018_melee2h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn018_melee2h_b.dbr",
    41, "records/items/lootaffixes/suffix/b_wpn018_melee2h_c.dbr",
    55, "records/items/lootaffixes/suffix/b_wpn018_melee2h_d.dbr",
    70, "records/items/lootaffixes/suffix/b_wpn018_melee2h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn018_melee2h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn018_melee2h_g.dbr",
};

const ItemAffix suffixWep2hOfTorrents
{
    LightningDamage, Melee2h | Range2h, 7, Wep2hOfTorrents
};

//of cruelty
//wep2h: bleeding dmg, crit, +4 fighting form
//[272]  s=records/items/lootaffixes/suffix/b_wpn010_melee2h_b.dbr
const ItemLvlName Wep2hOfCruelty[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn010_melee2h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn010_melee2h_b.dbr",
    40, "records/items/lootaffixes/suffix/b_wpn010_melee2h_c.dbr",
    54, "records/items/lootaffixes/suffix/b_wpn010_melee2h_d.dbr",
    70, "records/items/lootaffixes/suffix/b_wpn010_melee2h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn010_melee2h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn010_melee2h_g.dbr",
};

const ItemAffix suffixWep2hOfCruelty
{
    BleedDamage, Melee2h | Range2h, 7, Wep2hOfCruelty
};

//of the slayer
//wep2h: pierce dmg, crit, attk speed, +4 night's chill
//[272]  s=records/items/lootaffixes/suffix/b_wpn006_melee2h_a.dbr
const ItemLvlName Wep2hOfSlayer[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn006_melee2h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn006_melee2h_b.dbr",
    43, "records/items/lootaffixes/suffix/b_wpn006_melee2h_c.dbr",
    57, "records/items/lootaffixes/suffix/b_wpn006_melee2h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn006_melee2h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn006_melee2h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn006_melee2h_g.dbr",
};

const ItemAffix suffixWep2hOfSlayer
{
    PierceDamage, Melee2h | Range2h, 7, Wep2hOfSlayer
};

//of voracity -- small vit dmg and will fall under general
//wep2h: vit dmg, attk to health, crit, attk speed, +4 reaping strike
//[272]  s=records/items/lootaffixes/suffix/b_wpn007_melee2h_b.dbr
const ItemLvlName Wep2hOfVoracity[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn007_melee2h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn007_melee2h_b.dbr",
    43, "records/items/lootaffixes/suffix/b_wpn007_melee2h_c.dbr",
    57, "records/items/lootaffixes/suffix/b_wpn007_melee2h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn007_melee2h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn007_melee2h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn007_melee2h_g.dbr",
};

const ItemAffix suffixWep2hOfVoracity
{
    GeneratStat | VitalityDamage, Melee2h | Range2h, 7, Wep2hOfVoracity
};

//of the abomination
//wep2h: aether/phys dmg, phys, offense +4 ascension
//[272]  s=records/items/lootaffixes/suffix/b_wpn022_melee2h_b.dbr
const ItemLvlName Wep2hOfAbomination[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn022_melee2h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn022_melee2h_b.dbr",
    39, "records/items/lootaffixes/suffix/b_wpn022_melee2h_c.dbr",
    53, "records/items/lootaffixes/suffix/b_wpn022_melee2h_d.dbr",
    68, "records/items/lootaffixes/suffix/b_wpn022_melee2h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn022_melee2h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn022_melee2h_g.dbr",
};

const ItemAffix suffixWep2hOfAbomination
{
    AetherDamage | PhysicalDamage, Melee2h | Range2h, 7, Wep2hOfAbomination
};

//of blight
//wep2h: pois/acid/vit dmg, cast speed, offense +4 ravenous earth
//[272]  s=records/items/lootaffixes/suffix/b_wpn020_melee2h_b.dbr
const ItemLvlName Wep2hOfBlight[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn020_melee2h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn020_melee2h_b.dbr",
    42, "records/items/lootaffixes/suffix/b_wpn020_melee2h_c.dbr",
    53, "records/items/lootaffixes/suffix/b_wpn020_melee2h_d.dbr",
    68, "records/items/lootaffixes/suffix/b_wpn020_melee2h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn020_melee2h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn020_melee2h_g.dbr",
};

const ItemAffix suffixWep2hOfBlight
{
    PoisAcidDamage | VitalityDamage, Melee2h | Range2h, 7, Wep2hOfBlight
};

//of the elements
//wep2h: elem dmg, attk/cast speed, +4 raging tempest
//[272]  s=records/items/lootaffixes/suffix/b_wpn024_melee2h_b.dbr
const ItemLvlName Wep2hOfElements[7]
{
    5, "records/items/lootaffixes/suffix/b_wpn024_melee2h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn024_melee2h_b.dbr",
    39, "records/items/lootaffixes/suffix/b_wpn024_melee2h_c.dbr",
    53, "records/items/lootaffixes/suffix/b_wpn024_melee2h_d.dbr",
    68, "records/items/lootaffixes/suffix/b_wpn024_melee2h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn024_melee2h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn024_melee2h_g.dbr",
};

const ItemAffix suffixWep2hOfElements
{
    ElementalDamage, Melee2h | Range2h, 7, Wep2hOfElements
};

//of rituals
//offhand
//[10480]  s=records/items/lootaffixes/suffix/b_sh023_b.dbr
const ItemLvlName OfRituals[7]
{
    5, "records/items/lootaffixes/suffix/b_sh023_a.dbr",
    28, "records/items/lootaffixes/suffix/b_sh023_b.dbr",
    39, "records/items/lootaffixes/suffix/b_sh023_c.dbr",
    53, "records/items/lootaffixes/suffix/b_sh023_d.dbr",
    70, "records/items/lootaffixes/suffix/b_sh023_e.dbr",
    82, "records/items/lootaffixes/suffix/b_sh023_f.dbr",
    92, "records/items/lootaffixes/suffix/b_sh023_g.dbr",
};

const ItemAffix suffixOffhandOfRituals
{
    ElementalDamage, Offhand, 7, OfRituals
};

//of the oracle
//offhand
//[10480]  s=records/items/lootaffixes/suffix/b_sh004_b.dbr
const ItemLvlName OfOracle[7]
{
    5, "records/items/lootaffixes/suffix/b_sh004_a.dbr",
    26, "records/items/lootaffixes/suffix/b_sh004_b.dbr",
    43, "records/items/lootaffixes/suffix/b_sh004_c.dbr",
    57, "records/items/lootaffixes/suffix/b_sh004_d.dbr",
    74, "records/items/lootaffixes/suffix/b_sh004_e.dbr",
    82, "records/items/lootaffixes/suffix/b_sh004_f.dbr",
    92, "records/items/lootaffixes/suffix/b_sh004_g.dbr",
};

const ItemAffix suffixOffhandOfOracle
{
    ElementalDamage | VitalityDamage | PoisAcidDamage | AetherDamage | ChaosDamage, Offhand, 7, OfOracle
};

//of death's chill
//offhand
//[19600]  s=records/items/lootaffixes/suffix/b_sh027_b.dbr
const ItemLvlName OffhandOfDeathschill[7]
{
    20, "records/items/lootaffixes/suffix/b_sh027_a.dbr",
    35, "records/items/lootaffixes/suffix/b_sh027_b.dbr",
    43, "records/items/lootaffixes/suffix/b_sh027_c.dbr",
    59, "records/items/lootaffixes/suffix/b_sh027_d.dbr",
    74, "records/items/lootaffixes/suffix/b_sh027_e.dbr",
    82, "records/items/lootaffixes/suffix/b_sh027_f.dbr",
    92, "records/items/lootaffixes/suffix/b_sh027_g.dbr",
};

const ItemAffix suffixOffhandOfDeathschill
{
    ColdDamage | VitalityDamage, Offhand, 7, OffhandOfDeathschill
};

//of annihilation
//offhand
//[19868]  s=records/items/lootaffixes/suffix/b_sh022_d.dbr
const ItemLvlName OffhandOfAnnihilation[7]
{
    5, "records/items/lootaffixes/suffix/b_sh022_a.dbr",
    24, "records/items/lootaffixes/suffix/b_sh022_b.dbr",
    43, "records/items/lootaffixes/suffix/b_sh022_c.dbr",
    57, "records/items/lootaffixes/suffix/b_sh022_d.dbr",
    74, "records/items/lootaffixes/suffix/b_sh022_e.dbr",
    82, "records/items/lootaffixes/suffix/b_sh022_f.dbr",
    92, "records/items/lootaffixes/suffix/b_sh022_g.dbr",
};

const ItemAffix suffixOffhandOfAnnihilation
{
    VitalityDamage, Offhand, 7, OffhandOfAnnihilation
};

//of torrents
//offhand
//[19868]  s=records/items/lootaffixes/suffix/b_sh009_c.dbr
const ItemLvlName OffhandOfTorrents[7]
{
    20, "records/items/lootaffixes/suffix/b_sh009_a.dbr",
    35, "records/items/lootaffixes/suffix/b_sh009_b.dbr",
    43, "records/items/lootaffixes/suffix/b_sh009_c.dbr",
    59, "records/items/lootaffixes/suffix/b_sh009_d.dbr",
    74, "records/items/lootaffixes/suffix/b_sh009_e.dbr",
    82, "records/items/lootaffixes/suffix/b_sh009_f.dbr",
    92, "records/items/lootaffixes/suffix/b_sh009_g.dbr",
};

const ItemAffix suffixOffhandOfTorrents
{
    LightningDamage, Offhand, 7, OffhandOfTorrents
};


//of bestial rage
//[9976]  s=records/items/lootaffixes/suffix/b_wpn012_melee1h_a.dbr
const ItemLvlName suffixWepOfBestialRage[7]
{
     5, "records/items/lootaffixes/suffix/b_wpn012_melee1h_a.dbr",
    26, "records/items/lootaffixes/suffix/b_wpn012_melee1h_b .dbr",
    42, "records/items/lootaffixes/suffix/b_wpn012_melee1h_c.dbr",
    56, "records/items/lootaffixes/suffix/b_wpn012_melee1h_d.dbr",
    74, "records/items/lootaffixes/suffix/b_wpn012_melee1h_e.dbr",
    82, "records/items/lootaffixes/suffix/b_wpn012_melee1h_f.dbr",
    92, "records/items/lootaffixes/suffix/b_wpn012_melee1h_g.dbr",
};
const ItemAffix suffixOfBestialRage
{
    PetType, Dagger | Scepter, 7, suffixWepOfBestialRage
};

//of caged soul
//offhand
//[17716]  s=records/items/lootaffixes/suffix/b_sh103_b.dbr

const ItemLvlName suffixOffhandCagedSouls[7]
{
     5, "records/items/lootaffixes/suffix/b_sh103_a.dbr",
    26, "records/items/lootaffixes/suffix/b_sh103_b .dbr",
    41, "records/items/lootaffixes/suffix/b_sh103_c.dbr",
    55, "records/items/lootaffixes/suffix/b_sh103_d.dbr",
    70, "records/items/lootaffixes/suffix/b_sh103_e.dbr",
    82, "records/items/lootaffixes/suffix/b_sh103_f.dbr",
    92, "records/items/lootaffixes/suffix/b_sh103_g.dbr",
};
const ItemAffix suffixOfCagedSouls
{
    PetType, Offhand, 7, suffixOffhandCagedSouls
};


//=====================================
// list container
//=====================================
const std::vector<const ItemAffix*> suffixList = 
{ 
	&suffixNaturesBounty, 
    &suffixNaturesBountyArmor,
	//&suffixOfReadiness, 
    //&suffixOfReadinessArmor,
	//&suffixOfGildamArcanum,
	&suffixOfDranghoul,
    &suffixOfDranghoulArmor,
	&suffixOfButchery, 
    &suffixOfSoulWarding,

    &suffixOfSupremacy,
    &suffixOfFallenSkies,
    &suffixOfSqualls,
    &suffixOfSolaelsMaliceArmor,
    &suffixOfTheCabal,
    &suffixOfShatteredReality,
    &suffixOfVoidHarbinger,

    &suffixOfBlades,
    &suffixOfKings,

    &suffixOfAttack,
    &suffixOfArcaneBalance,
    &suffixOfArcaneBlaze,
    &suffixofMaivensWit,
    &suffixofInsight,
    &suffixOfScorchedRunes,
	&suffixOfBalancedSteel,
	&suffixOfMenhirsWall,
    &suffixOfReptilianResilience,
	&suffixOfViciousBarbs,

    &suffixOfArcaneWindsPants,
    &suffixOfArcaneWindsBoots,
    &suffixOfFleshHulk,
    &suffixOfDestruction,
    &suffixOfUlzuinsFlame,

    &suffixOfAmarastasFlurry,
    &suffixofDancingShadows,
    &suffixofStonefooting,

    &suffixOfShadows,
    &suffixOfScorchedEnds,
    &suffixOfStoneFists,

	&suffixOfIncantations,
	&suffixOfVengence,
	&suffixWep1hOfConflagration,
	&suffixOfImmortality,
	&suffixOfBlightShield, 
	&suffixOfTheGuardian,
	&suffixOfWildFire,
	&suffixOfRedoubt,
	&suffixOfImposingPresence,
    &suffixofTheGlacier,
    &suffixofArcaneBarriers,

    &suffixBattleFury,
    &suffixOleronsWrathArmor,
    &suffixOfBlightArmJewel,
    &suffixOfDreegsGazeArmor,
    &suffixWinterStorm,

    &suffixOfTheWildArmor,
    &suffixOftheWildJewel,
    &suffixOfCagedSoulsArmor,
    &suffixOfCagedSoulsJewel,
    &suffixOfTheUntamedArmor,
    &suffixOfTheUntamedJewel,

    &suffixWep1hOfFerocity,
    &suffixWep1hOfShattering,
    &suffixWep1hOfTorrents,
    &suffixWep1hOfWildfire,
    &suffixWep1hOfConflagration,
    &suffixWep1hOfFlamecaller,
    &suffixWep1hOfSlaughter,
    &suffixWep1hOfAnnihilation,
    &suffixWep1hOfCruelty,
    &suffixWep1hOfAbomination,
    &suffixWep1hOfRuthlessness,
    &suffixWep1hOfSlayer,
    &suffixWep1hOfVoracity,
    &suffixWep1hOfTheCabal,
    &suffixWep1hOfShatteredReality,
    &suffixWep1hOfSolaelsMalice,
    &suffixWep1hOfTheAbyss,
    &suffixWep1hOfTheVenomClaw,

    &suffixWep2hOfFury,
    &suffixWep2hOfWildfire,
    &suffixWep2hOfFerocity,
    &suffixWep2hOfVenomclaw,
    &suffixWep2hOfAnnihilation,
    &suffixWep2hOfTorrents,
    &suffixWep2hOfCruelty,
    &suffixWep2hOfSlayer,
    &suffixWep2hOfVoracity,
    &suffixWep2hOfAbomination,
    &suffixWep2hOfBlight,
    &suffixWep2hOfElements,

    &suffixOffhandOfRituals,
    &suffixOffhandOfOracle,
    &suffixOffhandOfDeathschill,
    &suffixOffhandOfAnnihilation,
    &suffixOffhandOfTorrents,

    &suffixOfBestialRage,
    &suffixOfCagedSouls
};

