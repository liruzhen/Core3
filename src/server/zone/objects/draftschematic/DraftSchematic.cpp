/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/zone/objects/draftschematic/DraftSchematic.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../scene/SceneObject.h"

#include "../player/Player.h"

#include "DraftSchematicIngredient.h"

#include "DraftSchematicExpPropGroup.h"

#include "../../packets/object/ObjectControllerMessage.h"

#include "DraftSchematic.h"

#include "DraftSchematicImplementation.h"

/*
 *	DraftSchematicStub
 */

DraftSchematic::DraftSchematic() : ORBObjectStub(NULL) {
}

DraftSchematic::DraftSchematic(ORBObjectServant* obj) : ORBObjectStub(obj) {
}

DraftSchematic::DraftSchematic(DraftSchematic& ref) : ORBObjectStub(ref) {
}

DraftSchematic::~DraftSchematic() {
}

DraftSchematic* DraftSchematic::clone() {
	return new DraftSchematic(*this);
}


DraftSchematic* DraftSchematic::dsClone(DraftSchematic* ds) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addObjectParameter(ds);

		return (DraftSchematic*) invocation.executeWithObjectReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->dsClone(ds);
}

void DraftSchematic::addIngredient(const string& ingredientTemplateName, const string& ingredientTitleName, bool optional, const string& resourceType, unsigned int resourceQuantity) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);
		invocation.addAsciiParameter(ingredientTemplateName);
		invocation.addAsciiParameter(ingredientTitleName);
		invocation.addBooleanParameter(optional);
		invocation.addAsciiParameter(resourceType);
		invocation.addUnsignedIntParameter(resourceQuantity);

		invocation.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->addIngredient(ingredientTemplateName, ingredientTitleName, optional, resourceType, resourceQuantity);
}

void DraftSchematic::sendIngredientsToPlayer(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->sendIngredientsToPlayer(player);
}

void DraftSchematic::helperSendIngredientsToPlayer(ObjectControllerMessage* objMsg) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);
		invocation.addObjectParameter(objMsg);

		invocation.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->helperSendIngredientsToPlayer(objMsg);
}

void DraftSchematic::addExperimentalProperty(unsigned int groupNumber, const string& experimentalProperty, unsigned int weight) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);
		invocation.addUnsignedIntParameter(groupNumber);
		invocation.addAsciiParameter(experimentalProperty);
		invocation.addUnsignedIntParameter(weight);

		invocation.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->addExperimentalProperty(groupNumber, experimentalProperty, weight);
}

void DraftSchematic::sendExperimentalPropertiesToPlayer(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->sendExperimentalPropertiesToPlayer(player);
}

DraftSchematicIngredient* DraftSchematic::getIngredient(int index) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);
		invocation.addSignedIntParameter(index);

		return (DraftSchematicIngredient*) invocation.executeWithObjectReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getIngredient(index);
}

int DraftSchematic::getIngredientListSize() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getIngredientListSize();
}

void DraftSchematic::addExpPropTitle(const string& title) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 14);
		invocation.addAsciiParameter(title);

		invocation.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->addExpPropTitle(title);
}

int DraftSchematic::getExpPropTitlesListSize() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 15);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getExpPropTitlesListSize();
}

string& DraftSchematic::getExpPropTitle(int index) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 16);
		invocation.addSignedIntParameter(index);

		invocation.executeWithAsciiReturn(_return_getExpPropTitle);
		return _return_getExpPropTitle;
	} else
		return ((DraftSchematicImplementation*) _impl)->getExpPropTitle(index);
}

int DraftSchematic::getExpPropGroupListSize() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 17);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getExpPropGroupListSize();
}

DraftSchematicExpPropGroup* DraftSchematic::getExpPropGroup(int index) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 18);
		invocation.addSignedIntParameter(index);

		return (DraftSchematicExpPropGroup*) invocation.executeWithObjectReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getExpPropGroup(index);
}

void DraftSchematic::setPersistent(bool status) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 19);
		invocation.addBooleanParameter(status);

		invocation.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setPersistent(status);
}

void DraftSchematic::setObjectID(unsigned long long objID) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 20);
		invocation.addUnsignedLongParameter(objID);

		invocation.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setObjectID(objID);
}

void DraftSchematic::setTanoAttributes(string& attributes) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 21);
		invocation.addAsciiParameter(attributes);

		invocation.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setTanoAttributes(attributes);
}

unsigned int DraftSchematic::getSchematicID() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 22);

		return invocation.executeWithUnsignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getSchematicID();
}

unsigned int DraftSchematic::getSchematicCRC() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 23);

		return invocation.executeWithUnsignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getSchematicCRC();
}

string& DraftSchematic::getName() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 24);

		invocation.executeWithAsciiReturn(_return_getName);
		return _return_getName;
	} else
		return ((DraftSchematicImplementation*) _impl)->getName();
}

string& DraftSchematic::getGroupName() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 25);

		invocation.executeWithAsciiReturn(_return_getGroupName);
		return _return_getGroupName;
	} else
		return ((DraftSchematicImplementation*) _impl)->getGroupName();
}

unsigned int DraftSchematic::getComplexity() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 26);

		return invocation.executeWithUnsignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getComplexity();
}

unsigned int DraftSchematic::getSchematicSize() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 27);

		return invocation.executeWithUnsignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getSchematicSize();
}

unsigned int DraftSchematic::getObjectID() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 28);

		return invocation.executeWithUnsignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getObjectID();
}

string& DraftSchematic::getTanoAttributes() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 29);

		invocation.executeWithAsciiReturn(_return_getTanoAttributes);
		return _return_getTanoAttributes;
	} else
		return ((DraftSchematicImplementation*) _impl)->getTanoAttributes();
}

int DraftSchematic::getCraftingToolTab() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 30);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getCraftingToolTab();
}

/*
 *	DraftSchematicAdapter
 */

DraftSchematicAdapter::DraftSchematicAdapter(DraftSchematicImplementation* obj) : ORBObjectAdapter((ORBObjectServant*) obj) {
}

Packet* DraftSchematicAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertLong(dsClone((DraftSchematic*) inv->getObjectParameter())->_getORBObjectID());
		break;
	case 7:
		addIngredient(inv->getAsciiParameter(_param0_addIngredient__string_string_bool_string_int_), inv->getAsciiParameter(_param1_addIngredient__string_string_bool_string_int_), inv->getBooleanParameter(), inv->getAsciiParameter(_param3_addIngredient__string_string_bool_string_int_), inv->getUnsignedIntParameter());
		break;
	case 8:
		sendIngredientsToPlayer((Player*) inv->getObjectParameter());
		break;
	case 9:
		helperSendIngredientsToPlayer((ObjectControllerMessage*) inv->getObjectParameter());
		break;
	case 10:
		addExperimentalProperty(inv->getUnsignedIntParameter(), inv->getAsciiParameter(_param1_addExperimentalProperty__int_string_int_), inv->getUnsignedIntParameter());
		break;
	case 11:
		sendExperimentalPropertiesToPlayer((Player*) inv->getObjectParameter());
		break;
	case 12:
		resp->insertLong(getIngredient(inv->getSignedIntParameter())->_getORBObjectID());
		break;
	case 13:
		resp->insertSignedInt(getIngredientListSize());
		break;
	case 14:
		addExpPropTitle(inv->getAsciiParameter(_param0_addExpPropTitle__string_));
		break;
	case 15:
		resp->insertSignedInt(getExpPropTitlesListSize());
		break;
	case 16:
		resp->insertAscii(getExpPropTitle(inv->getSignedIntParameter()));
		break;
	case 17:
		resp->insertSignedInt(getExpPropGroupListSize());
		break;
	case 18:
		resp->insertLong(getExpPropGroup(inv->getSignedIntParameter())->_getORBObjectID());
		break;
	case 19:
		setPersistent(inv->getBooleanParameter());
		break;
	case 20:
		setObjectID(inv->getUnsignedLongParameter());
		break;
	case 21:
		setTanoAttributes(inv->getAsciiParameter(_param0_setTanoAttributes__string_));
		break;
	case 22:
		resp->insertInt(getSchematicID());
		break;
	case 23:
		resp->insertInt(getSchematicCRC());
		break;
	case 24:
		resp->insertAscii(getName());
		break;
	case 25:
		resp->insertAscii(getGroupName());
		break;
	case 26:
		resp->insertInt(getComplexity());
		break;
	case 27:
		resp->insertInt(getSchematicSize());
		break;
	case 28:
		resp->insertInt(getObjectID());
		break;
	case 29:
		resp->insertAscii(getTanoAttributes());
		break;
	case 30:
		resp->insertSignedInt(getCraftingToolTab());
		break;
	default:
		return NULL;
	}

	return resp;
}

DraftSchematic* DraftSchematicAdapter::dsClone(DraftSchematic* ds) {
	return ((DraftSchematicImplementation*) impl)->dsClone(ds);
}

void DraftSchematicAdapter::addIngredient(const string& ingredientTemplateName, const string& ingredientTitleName, bool optional, const string& resourceType, unsigned int resourceQuantity) {
	return ((DraftSchematicImplementation*) impl)->addIngredient(ingredientTemplateName, ingredientTitleName, optional, resourceType, resourceQuantity);
}

void DraftSchematicAdapter::sendIngredientsToPlayer(Player* player) {
	return ((DraftSchematicImplementation*) impl)->sendIngredientsToPlayer(player);
}

void DraftSchematicAdapter::helperSendIngredientsToPlayer(ObjectControllerMessage* objMsg) {
	return ((DraftSchematicImplementation*) impl)->helperSendIngredientsToPlayer(objMsg);
}

void DraftSchematicAdapter::addExperimentalProperty(unsigned int groupNumber, const string& experimentalProperty, unsigned int weight) {
	return ((DraftSchematicImplementation*) impl)->addExperimentalProperty(groupNumber, experimentalProperty, weight);
}

void DraftSchematicAdapter::sendExperimentalPropertiesToPlayer(Player* player) {
	return ((DraftSchematicImplementation*) impl)->sendExperimentalPropertiesToPlayer(player);
}

DraftSchematicIngredient* DraftSchematicAdapter::getIngredient(int index) {
	return ((DraftSchematicImplementation*) impl)->getIngredient(index);
}

int DraftSchematicAdapter::getIngredientListSize() {
	return ((DraftSchematicImplementation*) impl)->getIngredientListSize();
}

void DraftSchematicAdapter::addExpPropTitle(const string& title) {
	return ((DraftSchematicImplementation*) impl)->addExpPropTitle(title);
}

int DraftSchematicAdapter::getExpPropTitlesListSize() {
	return ((DraftSchematicImplementation*) impl)->getExpPropTitlesListSize();
}

string& DraftSchematicAdapter::getExpPropTitle(int index) {
	return ((DraftSchematicImplementation*) impl)->getExpPropTitle(index);
}

int DraftSchematicAdapter::getExpPropGroupListSize() {
	return ((DraftSchematicImplementation*) impl)->getExpPropGroupListSize();
}

DraftSchematicExpPropGroup* DraftSchematicAdapter::getExpPropGroup(int index) {
	return ((DraftSchematicImplementation*) impl)->getExpPropGroup(index);
}

void DraftSchematicAdapter::setPersistent(bool status) {
	return ((DraftSchematicImplementation*) impl)->setPersistent(status);
}

void DraftSchematicAdapter::setObjectID(unsigned long long objID) {
	return ((DraftSchematicImplementation*) impl)->setObjectID(objID);
}

void DraftSchematicAdapter::setTanoAttributes(string& attributes) {
	return ((DraftSchematicImplementation*) impl)->setTanoAttributes(attributes);
}

unsigned int DraftSchematicAdapter::getSchematicID() {
	return ((DraftSchematicImplementation*) impl)->getSchematicID();
}

unsigned int DraftSchematicAdapter::getSchematicCRC() {
	return ((DraftSchematicImplementation*) impl)->getSchematicCRC();
}

string& DraftSchematicAdapter::getName() {
	return ((DraftSchematicImplementation*) impl)->getName();
}

string& DraftSchematicAdapter::getGroupName() {
	return ((DraftSchematicImplementation*) impl)->getGroupName();
}

unsigned int DraftSchematicAdapter::getComplexity() {
	return ((DraftSchematicImplementation*) impl)->getComplexity();
}

unsigned int DraftSchematicAdapter::getSchematicSize() {
	return ((DraftSchematicImplementation*) impl)->getSchematicSize();
}

unsigned int DraftSchematicAdapter::getObjectID() {
	return ((DraftSchematicImplementation*) impl)->getObjectID();
}

string& DraftSchematicAdapter::getTanoAttributes() {
	return ((DraftSchematicImplementation*) impl)->getTanoAttributes();
}

int DraftSchematicAdapter::getCraftingToolTab() {
	return ((DraftSchematicImplementation*) impl)->getCraftingToolTab();
}

/*
 *	DraftSchematicHelper
 */

DraftSchematicHelper::DraftSchematicHelper() {
	className = "DraftSchematic";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

void DraftSchematicHelper::finalizeHelper() {
	DraftSchematicHelper::finalize();
}

ORBObject* DraftSchematicHelper::instantiateObject() {
	return new DraftSchematic();
}

ORBObjectAdapter* DraftSchematicHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new DraftSchematicAdapter((DraftSchematicImplementation*) obj);

	ORBObjectStub* stub = new DraftSchematic(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	DraftSchematicServant
 */

DraftSchematicServant::DraftSchematicServant() {
	_classHelper = DraftSchematicHelper::instance();
}

DraftSchematicServant::~DraftSchematicServant() {
}

void DraftSchematicServant::_setStub(ORBObjectStub* stub) {
	_this = (DraftSchematic*) stub;
}

ORBObjectStub* DraftSchematicServant::_getStub() {
	return _this;
}

