/*
 *	server/zone/objects/tangible/terminal/bank/BankTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "BankTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.h"

#include "server/zone/objects/player/sui/SuiBox.h"

/*
 *	BankTerminalStub
 */

BankTerminal::BankTerminal(LuaObject* templateData) : Terminal(DummyConstructorParameter::instance()) {
	_impl = new BankTerminalImplementation(templateData);
	_impl->_setStub(this);
}

BankTerminal::BankTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

BankTerminal::~BankTerminal() {
}


void BankTerminal::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((BankTerminalImplementation*) _impl)->initializeTransientMembers();
}

void BankTerminal::fillObjectMenuResponse(ObjectMenuResponse* menuResponse) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(menuResponse);

		method.executeWithVoidReturn();
	} else
		((BankTerminalImplementation*) _impl)->fillObjectMenuResponse(menuResponse);
}

int BankTerminal::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return ((BankTerminalImplementation*) _impl)->handleObjectMenuSelect(player, selectedID);
}

/*
 *	BankTerminalImplementation
 */

BankTerminalImplementation::BankTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}

BankTerminalImplementation::~BankTerminalImplementation() {
}


void BankTerminalImplementation::finalize() {
}

void BankTerminalImplementation::_initializeImplementation() {
	_setClassHelper(BankTerminalHelper::instance());

	_serializationHelperMethod();
}

void BankTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (BankTerminal*) stub;
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* BankTerminalImplementation::_getStub() {
	return _this;
}

BankTerminalImplementation::operator const BankTerminal*() {
	return _this;
}

void BankTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BankTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BankTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BankTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BankTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BankTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BankTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BankTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("BankTerminal");

}

BankTerminalImplementation::BankTerminalImplementation(LuaObject* templateData) : TerminalImplementation(templateData) {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(63):  Logger.setLoggingName("BankTerminal");
	Logger::setLoggingName("BankTerminal");
}

void BankTerminalImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(67):  super.initializeTransientMembers();
	TerminalImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(69):  Logger.setLoggingName("BankTerminal");
	Logger::setLoggingName("BankTerminal");
}

void BankTerminalImplementation::fillObjectMenuResponse(ObjectMenuResponse* menuResponse) {
	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(80):  menuResponse.addRadialMenuItem(245, 3, "@sui:bank_items");
	menuResponse->addRadialMenuItem(245, 3, "@sui:bank_items");
}

int BankTerminalImplementation::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(90):  
	if (selectedID == 245){
	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(91):  SceneObject bank = player.getSlottedObject("bank");
	SceneObject* bank = player->getSlottedObject("bank");
	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(92):  bank.openContainerTo(player);
	bank->openContainerTo(player);
}

	else 	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(93):  
	if (selectedID == 20){
	ManagedReference<SuiBankTransferBox*> _ref0;
	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(94):  SuiBankTransferBox sui = new SuiBankTransferBox(this, player, SuiWindowType.BANK_TRANSFER);
	SuiBankTransferBox* sui = _ref0 = new SuiBankTransferBox(_this, player, SuiWindowType::BANK_TRANSFER);
	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(96):  sui.addCash(player.getCashCredits());
	sui->addCash(player->getCashCredits());
	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(97):  sui.addBank(player.getBankCredits());
	sui->addBank(player->getBankCredits());
	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(99):  player.addSuiBox(sui);
	player->addSuiBox(sui);
	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(100):  player.sendMessage(sui.generateMessage());
	player->sendMessage(sui->generateMessage());
}

	else 	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(103):  return 1;
	return 1;
	// server/zone/objects/tangible/terminal/bank/BankTerminal.idl(105):  return 0;
	return 0;
}

/*
 *	BankTerminalAdapter
 */

BankTerminalAdapter::BankTerminalAdapter(BankTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* BankTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		fillObjectMenuResponse((ObjectMenuResponse*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void BankTerminalAdapter::initializeTransientMembers() {
	((BankTerminalImplementation*) impl)->initializeTransientMembers();
}

void BankTerminalAdapter::fillObjectMenuResponse(ObjectMenuResponse* menuResponse) {
	((BankTerminalImplementation*) impl)->fillObjectMenuResponse(menuResponse);
}

int BankTerminalAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((BankTerminalImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

/*
 *	BankTerminalHelper
 */

BankTerminalHelper* BankTerminalHelper::staticInitializer = BankTerminalHelper::instance();

BankTerminalHelper::BankTerminalHelper() {
	className = "BankTerminal";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void BankTerminalHelper::finalizeHelper() {
	BankTerminalHelper::finalize();
}

DistributedObject* BankTerminalHelper::instantiateObject() {
	return new BankTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* BankTerminalHelper::instantiateServant() {
	return new BankTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BankTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BankTerminalAdapter((BankTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

