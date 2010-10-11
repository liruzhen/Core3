purbole = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "@monster_name:purbole",
	socialGroup = "Purbole",
	pvpFaction = "",
	faction = "",
	level = 17,
	chanceHit = 0.310000,
	damageMin = 170,
	damageMax = 180,
	range = 0,
	baseXp = 1102,
	baseHAM = 3200,
	armor = 0,
	resists = {10,10,0,-1,-1,40,-1,-1,-1},
	meatType = "meat_carnivore",
	meatAmount = 12,
	hideType = "hide_bristley",
	hideAmount = 8,
	boneType = "bone_mammal",
	boneAmount = 8,
	milk = 0,
	tamingChance = 0.250000,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE,
	creatureBitmask = STALKER + PACK,
	diet = CARNIVORE,

	templates = {},
	weapons = {},
	attacks = {
		{"stunattack","stunChance=50"}
	}
}

CreatureTemplates:addCreatureTemplate(purbole, "purbole")
