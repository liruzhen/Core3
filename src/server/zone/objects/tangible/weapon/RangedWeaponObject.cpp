/*
 *	server/zone/objects/tangible/weapon/RangedWeaponObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "RangedWeaponObject.h"

#include "server/zone/Zone.h"

/*
 *	RangedWeaponObjectStub
 */

RangedWeaponObject::RangedWeaponObject() : WeaponObject(DummyConstructorParameter::instance()) {
	ManagedObject::_setImplementation(new RangedWeaponObjectImplementation());
	ManagedObject::_getImplementation()->_setStub(this);
}

RangedWeaponObject::RangedWeaponObject(DummyConstructorParameter* param) : WeaponObject(param) {
}

RangedWeaponObject::~RangedWeaponObject() {
}


void RangedWeaponObject::initializeTransientMembers() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((RangedWeaponObjectImplementation*) _getImplementation())->initializeTransientMembers();
}

bool RangedWeaponObject::isRangedWeapon() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return method.executeWithBooleanReturn();
	} else
		return ((RangedWeaponObjectImplementation*) _getImplementation())->isRangedWeapon();
}

/*
 *	RangedWeaponObjectImplementation
 */

RangedWeaponObjectImplementation::RangedWeaponObjectImplementation(DummyConstructorParameter* param) : WeaponObjectImplementation(param) {
	_initializeImplementation();
}

RangedWeaponObjectImplementation::~RangedWeaponObjectImplementation() {
}


void RangedWeaponObjectImplementation::finalize() {
}

void RangedWeaponObjectImplementation::_initializeImplementation() {
	_setClassHelper(RangedWeaponObjectHelper::instance());

	_serializationHelperMethod();
}

void RangedWeaponObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (RangedWeaponObject*) stub;
	WeaponObjectImplementation::_setStub(stub);
}

DistributedObjectStub* RangedWeaponObjectImplementation::_getStub() {
	return _this;
}

RangedWeaponObjectImplementation::operator const RangedWeaponObject*() {
	return _this;
}

TransactionalObject* RangedWeaponObjectImplementation::clone() {
	RangedWeaponObjectImplementation* objectCopy = new RangedWeaponObjectImplementation(DummyConstructorParameter::instance());
	*((RangedWeaponObjectImplementation*) objectCopy) = *this;
	return (TransactionalObject*) objectCopy;
}


void RangedWeaponObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void RangedWeaponObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void RangedWeaponObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void RangedWeaponObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void RangedWeaponObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void RangedWeaponObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void RangedWeaponObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void RangedWeaponObjectImplementation::_serializationHelperMethod() {
	WeaponObjectImplementation::_serializationHelperMethod();

	_setClassName("RangedWeaponObject");

}

RangedWeaponObjectImplementation::RangedWeaponObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/weapon/RangedWeaponObject.idl(54):  		Logger.setLoggingName("RangedWeaponObject");
	Logger::setLoggingName("RangedWeaponObject");
}

void RangedWeaponObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/weapon/RangedWeaponObject.idl(58):  		super.initializeTransientMembers();
	WeaponObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/weapon/RangedWeaponObject.idl(60):  		Logger.setLoggingName("RangedWeaponObject");
	Logger::setLoggingName("RangedWeaponObject");
}

bool RangedWeaponObjectImplementation::isRangedWeapon() {
	// server/zone/objects/tangible/weapon/RangedWeaponObject.idl(64):  		return true;
	return true;
}

/*
 *	RangedWeaponObjectAdapter
 */

RangedWeaponObjectAdapter::RangedWeaponObjectAdapter(RangedWeaponObjectImplementation* obj) : WeaponObjectAdapter(obj) {
}

Packet* RangedWeaponObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertBoolean(isRangedWeapon());
		break;
	default:
		return NULL;
	}

	return resp;
}

void RangedWeaponObjectAdapter::initializeTransientMembers() {
	((RangedWeaponObjectImplementation*) impl)->initializeTransientMembers();
}

bool RangedWeaponObjectAdapter::isRangedWeapon() {
	return ((RangedWeaponObjectImplementation*) impl)->isRangedWeapon();
}

/*
 *	RangedWeaponObjectHelper
 */

RangedWeaponObjectHelper* RangedWeaponObjectHelper::staticInitializer = RangedWeaponObjectHelper::instance();

RangedWeaponObjectHelper::RangedWeaponObjectHelper() {
	className = "RangedWeaponObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void RangedWeaponObjectHelper::finalizeHelper() {
	RangedWeaponObjectHelper::finalize();
}

DistributedObject* RangedWeaponObjectHelper::instantiateObject() {
	return new RangedWeaponObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* RangedWeaponObjectHelper::instantiateServant() {
	return new RangedWeaponObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* RangedWeaponObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RangedWeaponObjectAdapter((RangedWeaponObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

