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
 *	server/zone/objects/tangible/craftingtool/CraftingTool.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../TangibleObject.h"

#include "../../../packets.h"

#include "../../player/Player.h"

#include "../../creature/CreatureObject.h"

#include "../../draftschematic/DraftSchematic.h"

#include "CraftingTool.h"

#include "CraftingToolImplementation.h"

/*
 *	CraftingToolStub
 */

CraftingTool::CraftingTool() : TangibleObject(NULL) {
}

CraftingTool::CraftingTool(ORBObjectServant* obj) : TangibleObject(obj) {
}

CraftingTool::CraftingTool(CraftingTool& ref) : TangibleObject(ref) {
}

CraftingTool::~CraftingTool() {
}

CraftingTool* CraftingTool::clone() {
	return new CraftingTool(*this);
}


void CraftingTool::sendTo(Player* player, bool doClose) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addObjectParameter(player);
		invocation.addBooleanParameter(doClose);

		invocation.executeWithVoidReturn();
	} else
		((CraftingToolImplementation*) _impl)->sendTo(player, doClose);
}

void CraftingTool::generateAttributes(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((CraftingToolImplementation*) _impl)->generateAttributes(player);
}

void CraftingTool::cleanUp() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);

		invocation.executeWithVoidReturn();
	} else
		((CraftingToolImplementation*) _impl)->cleanUp();
}

int CraftingTool::useObject(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);
		invocation.addObjectParameter(player);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((CraftingToolImplementation*) _impl)->useObject(player);
}

void CraftingTool::sendToolStart(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);
		invocation.addObjectParameter(player);

		invocation.executeWithVoidReturn();
	} else
		((CraftingToolImplementation*) _impl)->sendToolStart(player);
}

void CraftingTool::setToolEffectiveness(float eff) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);
		invocation.addFloatParameter(eff);

		invocation.executeWithVoidReturn();
	} else
		((CraftingToolImplementation*) _impl)->setToolEffectiveness(eff);
}

void CraftingTool::setCraftingState(int s) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);
		invocation.addSignedIntParameter(s);

		invocation.executeWithVoidReturn();
	} else
		((CraftingToolImplementation*) _impl)->setCraftingState(s);
}

void CraftingTool::setTano(TangibleObject* tano) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);
		invocation.addObjectParameter(tano);

		invocation.executeWithVoidReturn();
	} else
		((CraftingToolImplementation*) _impl)->setTano(tano);
}

void CraftingTool::setDs(DraftSchematic* ds) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 14);
		invocation.addObjectParameter(ds);

		invocation.executeWithVoidReturn();
	} else
		((CraftingToolImplementation*) _impl)->setDs(ds);
}

void CraftingTool::setInsertCount(int count) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 15);
		invocation.addSignedIntParameter(count);

		invocation.executeWithVoidReturn();
	} else
		((CraftingToolImplementation*) _impl)->setInsertCount(count);
}

void CraftingTool::increaseInsertCount() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 16);

		invocation.executeWithVoidReturn();
	} else
		((CraftingToolImplementation*) _impl)->increaseInsertCount();
}

float CraftingTool::getToolEffectiveness() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 17);

		return invocation.executeWithFloatReturn();
	} else
		return ((CraftingToolImplementation*) _impl)->getToolEffectiveness();
}

int CraftingTool::getCraftingState() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 18);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((CraftingToolImplementation*) _impl)->getCraftingState();
}

TangibleObject* CraftingTool::getTano() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 19);

		return (TangibleObject*) invocation.executeWithObjectReturn();
	} else
		return ((CraftingToolImplementation*) _impl)->getTano();
}

DraftSchematic* CraftingTool::getDs() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 20);

		return (DraftSchematic*) invocation.executeWithObjectReturn();
	} else
		return ((CraftingToolImplementation*) _impl)->getDs();
}

int CraftingTool::getInsertCount() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 21);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((CraftingToolImplementation*) _impl)->getInsertCount();
}

bool CraftingTool::isReady() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 22);

		return invocation.executeWithBooleanReturn();
	} else
		return ((CraftingToolImplementation*) _impl)->isReady();
}

/*
 *	CraftingToolAdapter
 */

CraftingToolAdapter::CraftingToolAdapter(CraftingToolImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* CraftingToolAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendTo((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 7:
		generateAttributes((Player*) inv->getObjectParameter());
		break;
	case 8:
		cleanUp();
		break;
	case 9:
		resp->insertSignedInt(useObject((Player*) inv->getObjectParameter()));
		break;
	case 10:
		sendToolStart((Player*) inv->getObjectParameter());
		break;
	case 11:
		setToolEffectiveness(inv->getFloatParameter());
		break;
	case 12:
		setCraftingState(inv->getSignedIntParameter());
		break;
	case 13:
		setTano((TangibleObject*) inv->getObjectParameter());
		break;
	case 14:
		setDs((DraftSchematic*) inv->getObjectParameter());
		break;
	case 15:
		setInsertCount(inv->getSignedIntParameter());
		break;
	case 16:
		increaseInsertCount();
		break;
	case 17:
		resp->insertFloat(getToolEffectiveness());
		break;
	case 18:
		resp->insertSignedInt(getCraftingState());
		break;
	case 19:
		resp->insertLong(getTano()->_getORBObjectID());
		break;
	case 20:
		resp->insertLong(getDs()->_getORBObjectID());
		break;
	case 21:
		resp->insertSignedInt(getInsertCount());
		break;
	case 22:
		resp->insertBoolean(isReady());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CraftingToolAdapter::sendTo(Player* player, bool doClose) {
	return ((CraftingToolImplementation*) impl)->sendTo(player, doClose);
}

void CraftingToolAdapter::generateAttributes(Player* player) {
	return ((CraftingToolImplementation*) impl)->generateAttributes(player);
}

void CraftingToolAdapter::cleanUp() {
	return ((CraftingToolImplementation*) impl)->cleanUp();
}

int CraftingToolAdapter::useObject(Player* player) {
	return ((CraftingToolImplementation*) impl)->useObject(player);
}

void CraftingToolAdapter::sendToolStart(Player* player) {
	return ((CraftingToolImplementation*) impl)->sendToolStart(player);
}

void CraftingToolAdapter::setToolEffectiveness(float eff) {
	return ((CraftingToolImplementation*) impl)->setToolEffectiveness(eff);
}

void CraftingToolAdapter::setCraftingState(int s) {
	return ((CraftingToolImplementation*) impl)->setCraftingState(s);
}

void CraftingToolAdapter::setTano(TangibleObject* tano) {
	return ((CraftingToolImplementation*) impl)->setTano(tano);
}

void CraftingToolAdapter::setDs(DraftSchematic* ds) {
	return ((CraftingToolImplementation*) impl)->setDs(ds);
}

void CraftingToolAdapter::setInsertCount(int count) {
	return ((CraftingToolImplementation*) impl)->setInsertCount(count);
}

void CraftingToolAdapter::increaseInsertCount() {
	return ((CraftingToolImplementation*) impl)->increaseInsertCount();
}

float CraftingToolAdapter::getToolEffectiveness() {
	return ((CraftingToolImplementation*) impl)->getToolEffectiveness();
}

int CraftingToolAdapter::getCraftingState() {
	return ((CraftingToolImplementation*) impl)->getCraftingState();
}

TangibleObject* CraftingToolAdapter::getTano() {
	return ((CraftingToolImplementation*) impl)->getTano();
}

DraftSchematic* CraftingToolAdapter::getDs() {
	return ((CraftingToolImplementation*) impl)->getDs();
}

int CraftingToolAdapter::getInsertCount() {
	return ((CraftingToolImplementation*) impl)->getInsertCount();
}

bool CraftingToolAdapter::isReady() {
	return ((CraftingToolImplementation*) impl)->isReady();
}

/*
 *	CraftingToolHelper
 */

CraftingToolHelper::CraftingToolHelper() {
	className = "CraftingTool";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

void CraftingToolHelper::finalizeHelper() {
	CraftingToolHelper::finalize();
}

ORBObject* CraftingToolHelper::instantiateObject() {
	return new CraftingTool();
}

ORBObjectAdapter* CraftingToolHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new CraftingToolAdapter((CraftingToolImplementation*) obj);

	ORBObjectStub* stub = new CraftingTool(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	CraftingToolServant
 */

CraftingToolServant::CraftingToolServant(unsigned long long oid, const unicode& n, const string& tempn, int tempCRC, int tp) : TangibleObjectImplementation(oid, n, tempn, tempCRC, tp) {
	_classHelper = CraftingToolHelper::instance();
}

CraftingToolServant::CraftingToolServant(CreatureObject* creature, const unicode& n, const string& tempn, int tempCRC, int tp) : TangibleObjectImplementation(creature, n, tempn, tempCRC, tp) {
	_classHelper = CraftingToolHelper::instance();
}

CraftingToolServant::~CraftingToolServant() {
}

void CraftingToolServant::_setStub(ORBObjectStub* stub) {
	_this = (CraftingTool*) stub;
	TangibleObjectServant::_setStub(stub);
}

ORBObjectStub* CraftingToolServant::_getStub() {
	return _this;
}

