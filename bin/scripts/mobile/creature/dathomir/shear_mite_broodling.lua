shear_mite_broodling = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "@mob/creature_names:shear_mite_broodling",
	socialGroup = "Shearmite",
	pvpFaction = "",
	faction = "",
	level = 8,
	chanceHit = 27.000000,
	damageMin = 70,
	damageMax = 75,
	range = 0,
	baseXp = 235,
	baseHAM = 450,
	armor = 0,
	resists = {0,0,10,0,0,0,0,-1,-1},
	meatType = "meat_insect",
	meatAmount = 15,
	hideType = "hide_scaley",
	hideAmount = 3,
	boneType = "bone_",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.250000,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE,
	creatureBitmask = STALKER + PACK,
	diet = CARNIVORE,

	templates = {},
	weapons = {},
	attacks = {
		{"posturedownattack","postureDownChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(shear_mite_broodling, "shear_mite_broodling")
