/*
 *	server/zone/ZoneServer.cpp generated by engine3 IDL compiler 0.60
 */

#include "ZoneServer.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/managers/player/PlayerManager.h"

#include "server/zone/Zone.h"

#include "server/chat/ChatManager.h"

#include "server/zone/managers/objectcontroller/ObjectController.h"

#include "server/zone/managers/radial/RadialManager.h"

#include "server/zone/managers/professions/ProfessionManager.h"

#include "server/zone/managers/resource/ResourceManager.h"

#include "server/zone/managers/bazaar/BazaarManager.h"

/*
 *	ZoneServerStub
 */

ZoneServer::ZoneServer(int processingThreads, int galaxyid) : ManagedObject(DummyConstructorParameter::instance()) {
	ManagedObject::_setImplementation(new ZoneServerImplementation(processingThreads, galaxyid));
	ManagedObject::_getImplementation()->_setStub(this);
}

ZoneServer::ZoneServer(DummyConstructorParameter* param) : ManagedObject(param) {
}

ZoneServer::~ZoneServer() {
}


void ZoneServer::test() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->test();
}

void ZoneServer::initializeTransientMembers() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->initializeTransientMembers();
}

ServiceClient* ZoneServer::createConnection(Socket* sock, SocketAddress& addr) {
	if (isNull()) {
		throw ObjectNotLocalException(this);

	} else
		return ((ZoneServerImplementation*) _getImplementation())->createConnection(sock, addr);
}

void ZoneServer::init() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->init();
}

void ZoneServer::run() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->run();
}

void ZoneServer::shutdown() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->shutdown();
}

void ZoneServer::startManagers() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->startManagers();
}

void ZoneServer::startZones() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->startZones();
}

void ZoneServer::stopManagers() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->stopManagers();
}

void ZoneServer::start(int p, int mconn) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addSignedIntParameter(p);
		method.addSignedIntParameter(mconn);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->start(p, mconn);
}

void ZoneServer::stop() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->stop();
}

void ZoneServer::handleMessage(ServiceClient* client, Packet* message) {
	if (isNull()) {
		throw ObjectNotLocalException(this);

	} else
		((ZoneServerImplementation*) _getImplementation())->handleMessage(client, message);
}

bool ZoneServer::handleError(ServiceClient* client, Exception& e) {
	if (isNull()) {
		throw ObjectNotLocalException(this);

	} else
		return ((ZoneServerImplementation*) _getImplementation())->handleError(client, e);
}

void ZoneServer::addTotalSentPacket(int count) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addSignedIntParameter(count);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->addTotalSentPacket(count);
}

void ZoneServer::addTotalResentPacket(int count) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addSignedIntParameter(count);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->addTotalResentPacket(count);
}

void ZoneServer::printInfo(bool forcedLog) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addBooleanParameter(forcedLog);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->printInfo(forcedLog);
}

void ZoneServer::printEvents() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->printEvents();
}

SceneObject* ZoneServer::getObject(unsigned long long objectID, bool doLock) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addUnsignedLongParameter(objectID);
		method.addBooleanParameter(doLock);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getObject(objectID, doLock);
}

SceneObject* ZoneServer::createObject(unsigned int templateCRC, int persistenceLevel, unsigned long long objectID) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addUnsignedIntParameter(templateCRC);
		method.addSignedIntParameter(persistenceLevel);
		method.addUnsignedLongParameter(objectID);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->createObject(templateCRC, persistenceLevel, objectID);
}

SceneObject* ZoneServer::createStaticObject(unsigned int templateCRC, unsigned long long objectID) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addUnsignedIntParameter(templateCRC);
		method.addUnsignedLongParameter(objectID);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->createStaticObject(templateCRC, objectID);
}

void ZoneServer::updateObjectToDatabase(SceneObject* object) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->updateObjectToDatabase(object);
}

void ZoneServer::updateObjectToStaticDatabase(SceneObject* object) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->updateObjectToStaticDatabase(object);
}

void ZoneServer::destroyObjectFromDatabase(unsigned long long objectID) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addUnsignedLongParameter(objectID);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->destroyObjectFromDatabase(objectID);
}

void ZoneServer::lock(bool doLock) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->lock(doLock);
}

void ZoneServer::unlock(bool doLock) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->unlock(doLock);
}

void ZoneServer::fixScheduler() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->fixScheduler();
}

void ZoneServer::changeUserCap(int amount) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addSignedIntParameter(amount);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->changeUserCap(amount);
}

int ZoneServer::getConnectionCount() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getConnectionCount();
}

void ZoneServer::increaseOnlinePlayers() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->increaseOnlinePlayers();
}

void ZoneServer::decreaseOnlinePlayers() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->decreaseOnlinePlayers();
}

void ZoneServer::increaseTotalDeletedPlayers() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->increaseTotalDeletedPlayers();
}

int ZoneServer::getGalaxyID() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getGalaxyID();
}

String ZoneServer::getServerName() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		method.executeWithAsciiReturn(_return_getServerName);
		return _return_getServerName;
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getServerName();
}

bool ZoneServer::isServerLocked() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->isServerLocked();
}

bool ZoneServer::isServerOnline() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->isServerOnline();
}

bool ZoneServer::isServerOffline() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->isServerOffline();
}

bool ZoneServer::isServerLoading() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->isServerLoading();
}

int ZoneServer::getServerState() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getServerState();
}

Zone* ZoneServer::getZone(int index) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);
		method.addSignedIntParameter(index);

		return (Zone*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getZone(index);
}

int ZoneServer::getMaxPlayers() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getMaxPlayers();
}

int ZoneServer::getTotalPlayers() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getTotalPlayers();
}

int ZoneServer::getDeletedPlayers() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getDeletedPlayers();
}

PlayerManager* ZoneServer::getPlayerManager() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);

		return (PlayerManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getPlayerManager();
}

ChatManager* ZoneServer::getChatManager() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);

		return (ChatManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getChatManager();
}

ObjectController* ZoneServer::getObjectController() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);

		return (ObjectController*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getObjectController();
}

RadialManager* ZoneServer::getRadialManager() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 48);

		return (RadialManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getRadialManager();
}

ResourceManager* ZoneServer::getResourceManager() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 49);

		return (ResourceManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getResourceManager();
}

BazaarManager* ZoneServer::getBazaarManager() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 50);

		return (BazaarManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getBazaarManager();
}

ProfessionManager* ZoneServer::getProfessionManager() {
	if (isNull()) {
		throw ObjectNotLocalException(this);

	} else
		return ((ZoneServerImplementation*) _getImplementation())->getProfessionManager();
}

void ZoneServer::setServerName(const String& servername) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 51);
		method.addAsciiParameter(servername);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->setServerName(servername);
}

void ZoneServer::setGalaxyID(int galaxyid) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 52);
		method.addSignedIntParameter(galaxyid);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->setGalaxyID(galaxyid);
}

void ZoneServer::setServerState(int state) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 53);
		method.addSignedIntParameter(state);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->setServerState(state);
}

void ZoneServer::setServerStateLocked() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 54);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->setServerStateLocked();
}

void ZoneServer::setServerStateOnline() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 55);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->setServerStateOnline();
}

void ZoneServer::loadMessageoftheDay() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 56);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->loadMessageoftheDay();
}

void ZoneServer::changeMessageoftheDay(const String& newMOTD) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 57);
		method.addAsciiParameter(newMOTD);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _getImplementation())->changeMessageoftheDay(newMOTD);
}

String ZoneServer::getMessageoftheDay() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 58);

		method.executeWithAsciiReturn(_return_getMessageoftheDay);
		return _return_getMessageoftheDay;
	} else
		return ((ZoneServerImplementation*) _getImplementation())->getMessageoftheDay();
}

/*
 *	ZoneServerImplementation
 */

ZoneServerImplementation::ZoneServerImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}

ZoneServerImplementation::~ZoneServerImplementation() {
}


void ZoneServerImplementation::finalize() {
}

void ZoneServerImplementation::_initializeImplementation() {
	_setClassHelper(ZoneServerHelper::instance());

	_serializationHelperMethod();
}

void ZoneServerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ZoneServer*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ZoneServerImplementation::_getStub() {
	return _this;
}

ZoneServerImplementation::operator const ZoneServer*() {
	return _this;
}

TransactionalObject* ZoneServerImplementation::clone() {
	ZoneServerImplementation* objectCopy = new ZoneServerImplementation(DummyConstructorParameter::instance());
	*((ZoneServerImplementation*) objectCopy) = *this;
	return (TransactionalObject*) objectCopy;
}


void ZoneServerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("ZoneServer");

	addSerializableVariable("procThreadCount", &procThreadCount);
	addSerializableVariable("zones", &zones);
	addSerializableVariable("playerManager", &playerManager);
	addSerializableVariable("chatManager", &chatManager);
	addSerializableVariable("radialManager", &radialManager);
	addSerializableVariable("resourceManager", &resourceManager);
	addSerializableVariable("bazaarManager", &bazaarManager);
	addSerializableVariable("totalSentPackets", &totalSentPackets);
	addSerializableVariable("totalResentPackets", &totalResentPackets);
	addSerializableVariable("currentPlayers", &currentPlayers);
	addSerializableVariable("maximumPlayers", &maximumPlayers);
	addSerializableVariable("totalPlayers", &totalPlayers);
	addSerializableVariable("totalDeletedPlayers", &totalDeletedPlayers);
	addSerializableVariable("serverState", &serverState);
	addSerializableVariable("name", &name);
	addSerializableVariable("messageoftheDay", &messageoftheDay);
	addSerializableVariable("galaxyID", &galaxyID);
}

void ZoneServerImplementation::test() {
	ManagedReference<Zone*> _ref0;
	// server/zone/ZoneServer.idl(113):  		Zone zone = new Zone(null, null, 0);
	Zone* zone = _ref0 = new Zone(NULL, NULL, 0);
	// server/zone/ZoneServer.idl(114):  		zone.getHeight(0, 1);
	zone->getHeight(0, 1);
}

void ZoneServerImplementation::fixScheduler() {
}

void ZoneServerImplementation::increaseOnlinePlayers() {
	Locker _locker(_this);
	// server/zone/ZoneServer.idl(207):  		++
	if ( ++currentPlayers > maximumPlayers)	// server/zone/ZoneServer.idl(208):  			maximumPlayers = currentPlayers;
	maximumPlayers = currentPlayers;
	// server/zone/ZoneServer.idl(210):  totalPlayers;
	 ++totalPlayers;
}

void ZoneServerImplementation::decreaseOnlinePlayers() {
	Locker _locker(_this);
	// server/zone/ZoneServer.idl(214):  		currentPlayers = currentPlayers - 1;
	currentPlayers = currentPlayers - 1;
}

void ZoneServerImplementation::increaseTotalDeletedPlayers() {
	Locker _locker(_this);
	// server/zone/ZoneServer.idl(218):  		++totalDeletedPlayers;
	 ++totalDeletedPlayers;
}

int ZoneServerImplementation::getGalaxyID() {
	// server/zone/ZoneServer.idl(222):  		return galaxyID;
	return galaxyID;
}

bool ZoneServerImplementation::isServerLocked() {
	// server/zone/ZoneServer.idl(228):  		return serverState == LOCKED;
	return serverState == LOCKED;
}

bool ZoneServerImplementation::isServerOnline() {
	// server/zone/ZoneServer.idl(232):  		return serverState == ONLINE;
	return serverState == ONLINE;
}

bool ZoneServerImplementation::isServerOffline() {
	// server/zone/ZoneServer.idl(236):  		return serverState == OFFLINE;
	return serverState == OFFLINE;
}

bool ZoneServerImplementation::isServerLoading() {
	// server/zone/ZoneServer.idl(240):  		return serverState == LOADING;
	return serverState == LOADING;
}

int ZoneServerImplementation::getServerState() {
	// server/zone/ZoneServer.idl(244):  		return serverState;
	return serverState;
}

Zone* ZoneServerImplementation::getZone(int index) {
	Locker _locker(_this);
	// server/zone/ZoneServer.idl(248):  		return zones.get(index);
	return (&zones)->get(index);
}

int ZoneServerImplementation::getMaxPlayers() {
	// server/zone/ZoneServer.idl(252):  		return maximumPlayers;
	return maximumPlayers;
}

int ZoneServerImplementation::getTotalPlayers() {
	// server/zone/ZoneServer.idl(256):  		return totalPlayers;
	return totalPlayers;
}

int ZoneServerImplementation::getDeletedPlayers() {
	// server/zone/ZoneServer.idl(260):  		return totalDeletedPlayers;
	return totalDeletedPlayers;
}

PlayerManager* ZoneServerImplementation::getPlayerManager() {
	// server/zone/ZoneServer.idl(264):  		return playerManager;
	return playerManager;
}

ChatManager* ZoneServerImplementation::getChatManager() {
	// server/zone/ZoneServer.idl(268):  		return chatManager;
	return chatManager;
}

ObjectController* ZoneServerImplementation::getObjectController() {
	// server/zone/ZoneServer.idl(272):  		return processor.getObjectController();
	return processor->getObjectController();
}

RadialManager* ZoneServerImplementation::getRadialManager() {
	// server/zone/ZoneServer.idl(276):  		return radialManager;
	return radialManager;
}

ResourceManager* ZoneServerImplementation::getResourceManager() {
	// server/zone/ZoneServer.idl(280):  		return resourceManager;
	return resourceManager;
}

BazaarManager* ZoneServerImplementation::getBazaarManager() {
	// server/zone/ZoneServer.idl(284):  		return bazaarManager;
	return bazaarManager;
}

ProfessionManager* ZoneServerImplementation::getProfessionManager() {
	// server/zone/ZoneServer.idl(289):  		return processor.getProfessionManager();
	return processor->getProfessionManager();
}

void ZoneServerImplementation::setGalaxyID(int galaxyid) {
	Locker _locker(_this);
	// server/zone/ZoneServer.idl(299):  		galaxyID = galaxyid;
	galaxyID = galaxyid;
}

void ZoneServerImplementation::setServerState(int state) {
	Locker _locker(_this);
	// server/zone/ZoneServer.idl(303):  		serverState = state;
	serverState = state;
}

/*
 *	ZoneServerAdapter
 */

ZoneServerAdapter::ZoneServerAdapter(ZoneServerImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* ZoneServerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		test();
		break;
	case 7:
		initializeTransientMembers();
		break;
	case 8:
		init();
		break;
	case 9:
		run();
		break;
	case 10:
		shutdown();
		break;
	case 11:
		startManagers();
		break;
	case 12:
		startZones();
		break;
	case 13:
		stopManagers();
		break;
	case 14:
		start(inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case 15:
		stop();
		break;
	case 16:
		addTotalSentPacket(inv->getSignedIntParameter());
		break;
	case 17:
		addTotalResentPacket(inv->getSignedIntParameter());
		break;
	case 18:
		printInfo(inv->getBooleanParameter());
		break;
	case 19:
		printEvents();
		break;
	case 20:
		resp->insertLong(getObject(inv->getUnsignedLongParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 21:
		resp->insertLong(createObject(inv->getUnsignedIntParameter(), inv->getSignedIntParameter(), inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case 22:
		resp->insertLong(createStaticObject(inv->getUnsignedIntParameter(), inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case 23:
		updateObjectToDatabase((SceneObject*) inv->getObjectParameter());
		break;
	case 24:
		updateObjectToStaticDatabase((SceneObject*) inv->getObjectParameter());
		break;
	case 25:
		destroyObjectFromDatabase(inv->getUnsignedLongParameter());
		break;
	case 26:
		lock(inv->getBooleanParameter());
		break;
	case 27:
		unlock(inv->getBooleanParameter());
		break;
	case 28:
		fixScheduler();
		break;
	case 29:
		changeUserCap(inv->getSignedIntParameter());
		break;
	case 30:
		resp->insertSignedInt(getConnectionCount());
		break;
	case 31:
		increaseOnlinePlayers();
		break;
	case 32:
		decreaseOnlinePlayers();
		break;
	case 33:
		increaseTotalDeletedPlayers();
		break;
	case 34:
		resp->insertSignedInt(getGalaxyID());
		break;
	case 35:
		resp->insertAscii(getServerName());
		break;
	case 36:
		resp->insertBoolean(isServerLocked());
		break;
	case 37:
		resp->insertBoolean(isServerOnline());
		break;
	case 38:
		resp->insertBoolean(isServerOffline());
		break;
	case 39:
		resp->insertBoolean(isServerLoading());
		break;
	case 40:
		resp->insertSignedInt(getServerState());
		break;
	case 41:
		resp->insertLong(getZone(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 42:
		resp->insertSignedInt(getMaxPlayers());
		break;
	case 43:
		resp->insertSignedInt(getTotalPlayers());
		break;
	case 44:
		resp->insertSignedInt(getDeletedPlayers());
		break;
	case 45:
		resp->insertLong(getPlayerManager()->_getObjectID());
		break;
	case 46:
		resp->insertLong(getChatManager()->_getObjectID());
		break;
	case 47:
		resp->insertLong(getObjectController()->_getObjectID());
		break;
	case 48:
		resp->insertLong(getRadialManager()->_getObjectID());
		break;
	case 49:
		resp->insertLong(getResourceManager()->_getObjectID());
		break;
	case 50:
		resp->insertLong(getBazaarManager()->_getObjectID());
		break;
	case 51:
		setServerName(inv->getAsciiParameter(_param0_setServerName__String_));
		break;
	case 52:
		setGalaxyID(inv->getSignedIntParameter());
		break;
	case 53:
		setServerState(inv->getSignedIntParameter());
		break;
	case 54:
		setServerStateLocked();
		break;
	case 55:
		setServerStateOnline();
		break;
	case 56:
		loadMessageoftheDay();
		break;
	case 57:
		changeMessageoftheDay(inv->getAsciiParameter(_param0_changeMessageoftheDay__String_));
		break;
	case 58:
		resp->insertAscii(getMessageoftheDay());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneServerAdapter::test() {
	((ZoneServerImplementation*) impl)->test();
}

void ZoneServerAdapter::initializeTransientMembers() {
	((ZoneServerImplementation*) impl)->initializeTransientMembers();
}

void ZoneServerAdapter::init() {
	((ZoneServerImplementation*) impl)->init();
}

void ZoneServerAdapter::run() {
	((ZoneServerImplementation*) impl)->run();
}

void ZoneServerAdapter::shutdown() {
	((ZoneServerImplementation*) impl)->shutdown();
}

void ZoneServerAdapter::startManagers() {
	((ZoneServerImplementation*) impl)->startManagers();
}

void ZoneServerAdapter::startZones() {
	((ZoneServerImplementation*) impl)->startZones();
}

void ZoneServerAdapter::stopManagers() {
	((ZoneServerImplementation*) impl)->stopManagers();
}

void ZoneServerAdapter::start(int p, int mconn) {
	((ZoneServerImplementation*) impl)->start(p, mconn);
}

void ZoneServerAdapter::stop() {
	((ZoneServerImplementation*) impl)->stop();
}

void ZoneServerAdapter::addTotalSentPacket(int count) {
	((ZoneServerImplementation*) impl)->addTotalSentPacket(count);
}

void ZoneServerAdapter::addTotalResentPacket(int count) {
	((ZoneServerImplementation*) impl)->addTotalResentPacket(count);
}

void ZoneServerAdapter::printInfo(bool forcedLog) {
	((ZoneServerImplementation*) impl)->printInfo(forcedLog);
}

void ZoneServerAdapter::printEvents() {
	((ZoneServerImplementation*) impl)->printEvents();
}

SceneObject* ZoneServerAdapter::getObject(unsigned long long objectID, bool doLock) {
	return ((ZoneServerImplementation*) impl)->getObject(objectID, doLock);
}

SceneObject* ZoneServerAdapter::createObject(unsigned int templateCRC, int persistenceLevel, unsigned long long objectID) {
	return ((ZoneServerImplementation*) impl)->createObject(templateCRC, persistenceLevel, objectID);
}

SceneObject* ZoneServerAdapter::createStaticObject(unsigned int templateCRC, unsigned long long objectID) {
	return ((ZoneServerImplementation*) impl)->createStaticObject(templateCRC, objectID);
}

void ZoneServerAdapter::updateObjectToDatabase(SceneObject* object) {
	((ZoneServerImplementation*) impl)->updateObjectToDatabase(object);
}

void ZoneServerAdapter::updateObjectToStaticDatabase(SceneObject* object) {
	((ZoneServerImplementation*) impl)->updateObjectToStaticDatabase(object);
}

void ZoneServerAdapter::destroyObjectFromDatabase(unsigned long long objectID) {
	((ZoneServerImplementation*) impl)->destroyObjectFromDatabase(objectID);
}

void ZoneServerAdapter::lock(bool doLock) {
	((ZoneServerImplementation*) impl)->lock(doLock);
}

void ZoneServerAdapter::unlock(bool doLock) {
	((ZoneServerImplementation*) impl)->unlock(doLock);
}

void ZoneServerAdapter::fixScheduler() {
	((ZoneServerImplementation*) impl)->fixScheduler();
}

void ZoneServerAdapter::changeUserCap(int amount) {
	((ZoneServerImplementation*) impl)->changeUserCap(amount);
}

int ZoneServerAdapter::getConnectionCount() {
	return ((ZoneServerImplementation*) impl)->getConnectionCount();
}

void ZoneServerAdapter::increaseOnlinePlayers() {
	((ZoneServerImplementation*) impl)->increaseOnlinePlayers();
}

void ZoneServerAdapter::decreaseOnlinePlayers() {
	((ZoneServerImplementation*) impl)->decreaseOnlinePlayers();
}

void ZoneServerAdapter::increaseTotalDeletedPlayers() {
	((ZoneServerImplementation*) impl)->increaseTotalDeletedPlayers();
}

int ZoneServerAdapter::getGalaxyID() {
	return ((ZoneServerImplementation*) impl)->getGalaxyID();
}

String ZoneServerAdapter::getServerName() {
	return ((ZoneServerImplementation*) impl)->getServerName();
}

bool ZoneServerAdapter::isServerLocked() {
	return ((ZoneServerImplementation*) impl)->isServerLocked();
}

bool ZoneServerAdapter::isServerOnline() {
	return ((ZoneServerImplementation*) impl)->isServerOnline();
}

bool ZoneServerAdapter::isServerOffline() {
	return ((ZoneServerImplementation*) impl)->isServerOffline();
}

bool ZoneServerAdapter::isServerLoading() {
	return ((ZoneServerImplementation*) impl)->isServerLoading();
}

int ZoneServerAdapter::getServerState() {
	return ((ZoneServerImplementation*) impl)->getServerState();
}

Zone* ZoneServerAdapter::getZone(int index) {
	return ((ZoneServerImplementation*) impl)->getZone(index);
}

int ZoneServerAdapter::getMaxPlayers() {
	return ((ZoneServerImplementation*) impl)->getMaxPlayers();
}

int ZoneServerAdapter::getTotalPlayers() {
	return ((ZoneServerImplementation*) impl)->getTotalPlayers();
}

int ZoneServerAdapter::getDeletedPlayers() {
	return ((ZoneServerImplementation*) impl)->getDeletedPlayers();
}

PlayerManager* ZoneServerAdapter::getPlayerManager() {
	return ((ZoneServerImplementation*) impl)->getPlayerManager();
}

ChatManager* ZoneServerAdapter::getChatManager() {
	return ((ZoneServerImplementation*) impl)->getChatManager();
}

ObjectController* ZoneServerAdapter::getObjectController() {
	return ((ZoneServerImplementation*) impl)->getObjectController();
}

RadialManager* ZoneServerAdapter::getRadialManager() {
	return ((ZoneServerImplementation*) impl)->getRadialManager();
}

ResourceManager* ZoneServerAdapter::getResourceManager() {
	return ((ZoneServerImplementation*) impl)->getResourceManager();
}

BazaarManager* ZoneServerAdapter::getBazaarManager() {
	return ((ZoneServerImplementation*) impl)->getBazaarManager();
}

void ZoneServerAdapter::setServerName(const String& servername) {
	((ZoneServerImplementation*) impl)->setServerName(servername);
}

void ZoneServerAdapter::setGalaxyID(int galaxyid) {
	((ZoneServerImplementation*) impl)->setGalaxyID(galaxyid);
}

void ZoneServerAdapter::setServerState(int state) {
	((ZoneServerImplementation*) impl)->setServerState(state);
}

void ZoneServerAdapter::setServerStateLocked() {
	((ZoneServerImplementation*) impl)->setServerStateLocked();
}

void ZoneServerAdapter::setServerStateOnline() {
	((ZoneServerImplementation*) impl)->setServerStateOnline();
}

void ZoneServerAdapter::loadMessageoftheDay() {
	((ZoneServerImplementation*) impl)->loadMessageoftheDay();
}

void ZoneServerAdapter::changeMessageoftheDay(const String& newMOTD) {
	((ZoneServerImplementation*) impl)->changeMessageoftheDay(newMOTD);
}

String ZoneServerAdapter::getMessageoftheDay() {
	return ((ZoneServerImplementation*) impl)->getMessageoftheDay();
}

/*
 *	ZoneServerHelper
 */

ZoneServerHelper* ZoneServerHelper::staticInitializer = ZoneServerHelper::instance();

ZoneServerHelper::ZoneServerHelper() {
	className = "ZoneServer";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ZoneServerHelper::finalizeHelper() {
	ZoneServerHelper::finalize();
}

DistributedObject* ZoneServerHelper::instantiateObject() {
	return new ZoneServer(DummyConstructorParameter::instance());
}

DistributedObjectServant* ZoneServerHelper::instantiateServant() {
	return new ZoneServerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ZoneServerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ZoneServerAdapter((ZoneServerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

