bloodseeker_mite_drone = Creature:new {
	templateType = NPCCREATURE,
	gameObjectType = 1024,
	objectName = "@mob/creature_names:bloodseeker_mite_drone",
	socialGroup = "Bloodseeker",
	pvpFaction = "",
	faction = "",
	level = 20,
	chanceHit = 0.320000,
	damageMin = 210,
	damageMax = 220,
	range = 0,
	baseXp = 1609,
	baseHAM = 2700,
	armor = 0,
	resists = {-1,35,-1,45,-1,45,45,-1,-1},
	meatType = "meat_insect",
	meatAmount = 0,
	hideType = "hide_scale",
	hideAmount = 0,
	boneType = "bone_",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0.000000,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK,
	diet = CARNIVORE,

	templates = {},
	weapons = {},
	attacks = {}
}

CreatureTemplates:addCreatureTemplate(bloodseeker_mite_drone, "bloodseeker_mite_drone")
