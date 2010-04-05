/*
 *	server/zone/objects/tangible/terminal/bazaar/AuctionItem.cpp generated by engine3 IDL compiler 0.60
 */

#include "AuctionItem.h"

#include "server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.h"

/*
 *	AuctionItemStub
 */

AuctionItem::AuctionItem(unsigned long long objectid) : ManagedObject(DummyConstructorParameter::instance()) {
	ManagedObject::_setImplementation(new AuctionItemImplementation(objectid));
	ManagedObject::_getImplementation()->_setStub(this);
}

AuctionItem::AuctionItem(DummyConstructorParameter* param) : ManagedObject(param) {
}

AuctionItem::~AuctionItem() {
}


void AuctionItem::setLocation(const String& planet, const String& header, unsigned long long vendorid, int x, int z, bool vendor) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addAsciiParameter(planet);
		method.addAsciiParameter(header);
		method.addUnsignedLongParameter(vendorid);
		method.addSignedIntParameter(x);
		method.addSignedIntParameter(z);
		method.addBooleanParameter(vendor);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setLocation(planet, header, vendorid, x, z, vendor);
}

void AuctionItem::setItemName(const String& name) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setItemName(name);
}

void AuctionItem::setItemDescription(const String& descr) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addAsciiParameter(descr);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setItemDescription(descr);
}

void AuctionItem::setPrice(int newPrice) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addSignedIntParameter(newPrice);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setPrice(newPrice);
}

void AuctionItem::setAuctionedItemObjectID(unsigned long long objectID) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addUnsignedLongParameter(objectID);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setAuctionedItemObjectID(objectID);
}

void AuctionItem::setItemType(int type) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setItemType(type);
}

void AuctionItem::setOwnerID(unsigned long long ownerObjectID) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addUnsignedLongParameter(ownerObjectID);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setOwnerID(ownerObjectID);
}

void AuctionItem::setBidderName(const String& name) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setBidderName(name);
}

void AuctionItem::setPlanet(unsigned short planetid) {
	if (isNull()) {
		throw ObjectNotLocalException(this);

	} else
		((AuctionItemImplementation*) _getImplementation())->setPlanet(planetid);
}

void AuctionItem::setOwnerName(const String& name) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setOwnerName(name);
}

void AuctionItem::setBazaarTerminal(BazaarTerminal* term) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(term);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setBazaarTerminal(term);
}

void AuctionItem::setAuction(bool isAuction) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addBooleanParameter(isAuction);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setAuction(isAuction);
}

void AuctionItem::setSold(bool isSold) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addBooleanParameter(isSold);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setSold(isSold);
}

void AuctionItem::setRemovedByOwner(bool isRemovedByOwner) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addBooleanParameter(isRemovedByOwner);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setRemovedByOwner(isRemovedByOwner);
}

void AuctionItem::setExpireTime(int time) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addSignedIntParameter(time);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setExpireTime(time);
}

void AuctionItem::setBuyerID(unsigned long long id) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addUnsignedLongParameter(id);

		method.executeWithVoidReturn();
	} else
		((AuctionItemImplementation*) _getImplementation())->setBuyerID(id);
}

BazaarTerminal* AuctionItem::getBazaarTerminal() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return (BazaarTerminal*) method.executeWithObjectReturn();
	} else
		return ((AuctionItemImplementation*) _getImplementation())->getBazaarTerminal();
}

bool AuctionItem::isSold() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithBooleanReturn();
	} else
		return ((AuctionItemImplementation*) _getImplementation())->isSold();
}

bool AuctionItem::isAuction() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithBooleanReturn();
	} else
		return ((AuctionItemImplementation*) _getImplementation())->isAuction();
}

bool AuctionItem::isRemovedByOwner() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithBooleanReturn();
	} else
		return ((AuctionItemImplementation*) _getImplementation())->isRemovedByOwner();
}

unsigned long long AuctionItem::getAuctionedItemObjectID() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((AuctionItemImplementation*) _getImplementation())->getAuctionedItemObjectID();
}

unsigned long long AuctionItem::getOwnerID() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((AuctionItemImplementation*) _getImplementation())->getOwnerID();
}

String AuctionItem::getTerminalTitle() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		method.executeWithAsciiReturn(_return_getTerminalTitle);
		return _return_getTerminalTitle;
	} else
		return ((AuctionItemImplementation*) _getImplementation())->getTerminalTitle();
}

String AuctionItem::getOwnerName() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		method.executeWithAsciiReturn(_return_getOwnerName);
		return _return_getOwnerName;
	} else
		return ((AuctionItemImplementation*) _getImplementation())->getOwnerName();
}

String AuctionItem::getItemName() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		method.executeWithAsciiReturn(_return_getItemName);
		return _return_getItemName;
	} else
		return ((AuctionItemImplementation*) _getImplementation())->getItemName();
}

int AuctionItem::getExpireTime() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithSignedIntReturn();
	} else
		return ((AuctionItemImplementation*) _getImplementation())->getExpireTime();
}

int AuctionItem::getPrice() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithSignedIntReturn();
	} else
		return ((AuctionItemImplementation*) _getImplementation())->getPrice();
}

int AuctionItem::getItemType() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithSignedIntReturn();
	} else
		return ((AuctionItemImplementation*) _getImplementation())->getItemType();
}

unsigned long long AuctionItem::getBuyerID() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((AuctionItemImplementation*) _getImplementation())->getBuyerID();
}

String AuctionItem::getBidderName() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		method.executeWithAsciiReturn(_return_getBidderName);
		return _return_getBidderName;
	} else
		return ((AuctionItemImplementation*) _getImplementation())->getBidderName();
}

String AuctionItem::getItemDescription() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		method.executeWithAsciiReturn(_return_getItemDescription);
		return _return_getItemDescription;
	} else
		return ((AuctionItemImplementation*) _getImplementation())->getItemDescription();
}

String AuctionItem::getLocation() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		method.executeWithAsciiReturn(_return_getLocation);
		return _return_getLocation;
	} else
		return ((AuctionItemImplementation*) _getImplementation())->getLocation();
}

/*
 *	AuctionItemImplementation
 */

AuctionItemImplementation::AuctionItemImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}

AuctionItemImplementation::~AuctionItemImplementation() {
}


void AuctionItemImplementation::finalize() {
}

void AuctionItemImplementation::_initializeImplementation() {
	_setClassHelper(AuctionItemHelper::instance());

	_serializationHelperMethod();
}

void AuctionItemImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (AuctionItem*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* AuctionItemImplementation::_getStub() {
	return _this;
}

AuctionItemImplementation::operator const AuctionItem*() {
	return _this;
}

TransactionalObject* AuctionItemImplementation::clone() {
	AuctionItemImplementation* objectCopy = new AuctionItemImplementation(DummyConstructorParameter::instance());
	*((AuctionItemImplementation*) objectCopy) = *this;
	return (TransactionalObject*) objectCopy;
}


void AuctionItemImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void AuctionItemImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void AuctionItemImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void AuctionItemImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void AuctionItemImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void AuctionItemImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void AuctionItemImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void AuctionItemImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("AuctionItem");

	addSerializableVariable("bazaarTerminal", &bazaarTerminal);
	addSerializableVariable("auctionedItemObjectID", &auctionedItemObjectID);
	addSerializableVariable("itemType", &itemType);
	addSerializableVariable("ownerID", &ownerID);
	addSerializableVariable("ownerName", &ownerName);
	addSerializableVariable("bidderName", &bidderName);
	addSerializableVariable("planet", &planet);
	addSerializableVariable("region", &region);
	addSerializableVariable("location", &location);
	addSerializableVariable("terminalTitle", &terminalTitle);
	addSerializableVariable("itemName", &itemName);
	addSerializableVariable("itemDescription", &itemDescription);
	addSerializableVariable("price", &price);
	addSerializableVariable("auction", &auction);
	addSerializableVariable("sold", &sold);
	addSerializableVariable("ownerRemove", &ownerRemove);
	addSerializableVariable("buyerID", &buyerID);
	addSerializableVariable("expireTime", &expireTime);
	addSerializableVariable("remainingTime", &remainingTime);
	addSerializableVariable("updated", &updated);
}

AuctionItemImplementation::AuctionItemImplementation(unsigned long long objectid) {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(88):  		auctionedItemObjectID = objectid;
	auctionedItemObjectID = objectid;
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(89):  		itemType = 0;
	itemType = 0;
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(91):  		ownerID = 0;
	ownerID = 0;
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(92):  		planet = 0;
	planet = 0;
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(94):  		price = 0;
	price = 0;
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(96):  		auction = true;
	auction = true;
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(97):  		sold = false;
	sold = false;
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(98):  		ownerRemove = false;
	ownerRemove = false;
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(100):  		buyerID = 0;
	buyerID = 0;
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(101):  		expireTime = 0;
	expireTime = 0;
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(102):  		remainingTime = 0;
	remainingTime = 0;
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(104):  		updated = false;
	updated = false;
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(106):  		bazaarTerminal = null;
	bazaarTerminal = NULL;
}

void AuctionItemImplementation::setItemName(const String& name) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(114):  		itemName = name;
	itemName = name;
}

void AuctionItemImplementation::setItemDescription(const String& descr) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(118):  		itemDescription = descr;
	itemDescription = descr;
}

void AuctionItemImplementation::setPrice(int newPrice) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(122):  		price = newPrice;
	price = newPrice;
}

void AuctionItemImplementation::setAuctionedItemObjectID(unsigned long long objectID) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(126):  		auctionedItemObjectID = objectID;
	auctionedItemObjectID = objectID;
}

void AuctionItemImplementation::setItemType(int type) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(130):  		itemType = type;
	itemType = type;
}

void AuctionItemImplementation::setOwnerID(unsigned long long ownerObjectID) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(134):  		ownerID = ownerObjectID;
	ownerID = ownerObjectID;
}

void AuctionItemImplementation::setBidderName(const String& name) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(138):  		bidderName = name;
	bidderName = name;
}

void AuctionItemImplementation::setPlanet(unsigned short planetid) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(143):  		planet = planetid;
	planet = planetid;
}

void AuctionItemImplementation::setOwnerName(const String& name) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(147):  		ownerName = name;
	ownerName = name;
}

void AuctionItemImplementation::setBazaarTerminal(BazaarTerminal* term) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(151):  		bazaarTerminal = term;
	bazaarTerminal = term;
}

void AuctionItemImplementation::setAuction(bool isAuction) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(155):  		auction = isAuction;
	auction = isAuction;
}

void AuctionItemImplementation::setSold(bool isSold) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(159):  		sold = isSold;
	sold = isSold;
}

void AuctionItemImplementation::setRemovedByOwner(bool isRemovedByOwner) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(163):  		ownerRemove = isRemovedByOwner;
	ownerRemove = isRemovedByOwner;
}

void AuctionItemImplementation::setExpireTime(int time) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(167):  		expireTime = time;
	expireTime = time;
}

void AuctionItemImplementation::setBuyerID(unsigned long long id) {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(171):  		buyerID = id;
	buyerID = id;
}

BazaarTerminal* AuctionItemImplementation::getBazaarTerminal() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(175):  		return bazaarTerminal;
	return bazaarTerminal;
}

bool AuctionItemImplementation::isSold() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(179):  		return sold;
	return sold;
}

bool AuctionItemImplementation::isAuction() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(183):  		return auction;
	return auction;
}

bool AuctionItemImplementation::isRemovedByOwner() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(187):  		return ownerRemove;
	return ownerRemove;
}

unsigned long long AuctionItemImplementation::getAuctionedItemObjectID() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(191):  		return auctionedItemObjectID;
	return auctionedItemObjectID;
}

unsigned long long AuctionItemImplementation::getOwnerID() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(195):  		return ownerID;
	return ownerID;
}

String AuctionItemImplementation::getTerminalTitle() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(199):  		return terminalTitle;
	return terminalTitle;
}

String AuctionItemImplementation::getOwnerName() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(203):  		return ownerName;
	return ownerName;
}

String AuctionItemImplementation::getItemName() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(207):  		return itemName;
	return itemName;
}

int AuctionItemImplementation::getExpireTime() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(211):  		return expireTime;
	return expireTime;
}

int AuctionItemImplementation::getPrice() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(215):  		return price;
	return price;
}

int AuctionItemImplementation::getItemType() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(219):  		return itemType;
	return itemType;
}

unsigned long long AuctionItemImplementation::getBuyerID() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(223):  		return buyerID;
	return buyerID;
}

String AuctionItemImplementation::getBidderName() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(227):  		return bidderName;
	return bidderName;
}

String AuctionItemImplementation::getItemDescription() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(231):  		return itemDescription;
	return itemDescription;
}

String AuctionItemImplementation::getLocation() {
	// server/zone/objects/tangible/terminal/bazaar/AuctionItem.idl(235):  		return location;
	return location;
}

/*
 *	AuctionItemAdapter
 */

AuctionItemAdapter::AuctionItemAdapter(AuctionItemImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* AuctionItemAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		setLocation(inv->getAsciiParameter(_param0_setLocation__String_String_long_int_int_bool_), inv->getAsciiParameter(_param1_setLocation__String_String_long_int_int_bool_), inv->getUnsignedLongParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 7:
		setItemName(inv->getAsciiParameter(_param0_setItemName__String_));
		break;
	case 8:
		setItemDescription(inv->getAsciiParameter(_param0_setItemDescription__String_));
		break;
	case 9:
		setPrice(inv->getSignedIntParameter());
		break;
	case 10:
		setAuctionedItemObjectID(inv->getUnsignedLongParameter());
		break;
	case 11:
		setItemType(inv->getSignedIntParameter());
		break;
	case 12:
		setOwnerID(inv->getUnsignedLongParameter());
		break;
	case 13:
		setBidderName(inv->getAsciiParameter(_param0_setBidderName__String_));
		break;
	case 14:
		setOwnerName(inv->getAsciiParameter(_param0_setOwnerName__String_));
		break;
	case 15:
		setBazaarTerminal((BazaarTerminal*) inv->getObjectParameter());
		break;
	case 16:
		setAuction(inv->getBooleanParameter());
		break;
	case 17:
		setSold(inv->getBooleanParameter());
		break;
	case 18:
		setRemovedByOwner(inv->getBooleanParameter());
		break;
	case 19:
		setExpireTime(inv->getSignedIntParameter());
		break;
	case 20:
		setBuyerID(inv->getUnsignedLongParameter());
		break;
	case 21:
		resp->insertLong(getBazaarTerminal()->_getObjectID());
		break;
	case 22:
		resp->insertBoolean(isSold());
		break;
	case 23:
		resp->insertBoolean(isAuction());
		break;
	case 24:
		resp->insertBoolean(isRemovedByOwner());
		break;
	case 25:
		resp->insertLong(getAuctionedItemObjectID());
		break;
	case 26:
		resp->insertLong(getOwnerID());
		break;
	case 27:
		resp->insertAscii(getTerminalTitle());
		break;
	case 28:
		resp->insertAscii(getOwnerName());
		break;
	case 29:
		resp->insertAscii(getItemName());
		break;
	case 30:
		resp->insertSignedInt(getExpireTime());
		break;
	case 31:
		resp->insertSignedInt(getPrice());
		break;
	case 32:
		resp->insertSignedInt(getItemType());
		break;
	case 33:
		resp->insertLong(getBuyerID());
		break;
	case 34:
		resp->insertAscii(getBidderName());
		break;
	case 35:
		resp->insertAscii(getItemDescription());
		break;
	case 36:
		resp->insertAscii(getLocation());
		break;
	default:
		return NULL;
	}

	return resp;
}

void AuctionItemAdapter::setLocation(const String& planet, const String& header, unsigned long long vendorid, int x, int z, bool vendor) {
	((AuctionItemImplementation*) impl)->setLocation(planet, header, vendorid, x, z, vendor);
}

void AuctionItemAdapter::setItemName(const String& name) {
	((AuctionItemImplementation*) impl)->setItemName(name);
}

void AuctionItemAdapter::setItemDescription(const String& descr) {
	((AuctionItemImplementation*) impl)->setItemDescription(descr);
}

void AuctionItemAdapter::setPrice(int newPrice) {
	((AuctionItemImplementation*) impl)->setPrice(newPrice);
}

void AuctionItemAdapter::setAuctionedItemObjectID(unsigned long long objectID) {
	((AuctionItemImplementation*) impl)->setAuctionedItemObjectID(objectID);
}

void AuctionItemAdapter::setItemType(int type) {
	((AuctionItemImplementation*) impl)->setItemType(type);
}

void AuctionItemAdapter::setOwnerID(unsigned long long ownerObjectID) {
	((AuctionItemImplementation*) impl)->setOwnerID(ownerObjectID);
}

void AuctionItemAdapter::setBidderName(const String& name) {
	((AuctionItemImplementation*) impl)->setBidderName(name);
}

void AuctionItemAdapter::setOwnerName(const String& name) {
	((AuctionItemImplementation*) impl)->setOwnerName(name);
}

void AuctionItemAdapter::setBazaarTerminal(BazaarTerminal* term) {
	((AuctionItemImplementation*) impl)->setBazaarTerminal(term);
}

void AuctionItemAdapter::setAuction(bool isAuction) {
	((AuctionItemImplementation*) impl)->setAuction(isAuction);
}

void AuctionItemAdapter::setSold(bool isSold) {
	((AuctionItemImplementation*) impl)->setSold(isSold);
}

void AuctionItemAdapter::setRemovedByOwner(bool isRemovedByOwner) {
	((AuctionItemImplementation*) impl)->setRemovedByOwner(isRemovedByOwner);
}

void AuctionItemAdapter::setExpireTime(int time) {
	((AuctionItemImplementation*) impl)->setExpireTime(time);
}

void AuctionItemAdapter::setBuyerID(unsigned long long id) {
	((AuctionItemImplementation*) impl)->setBuyerID(id);
}

BazaarTerminal* AuctionItemAdapter::getBazaarTerminal() {
	return ((AuctionItemImplementation*) impl)->getBazaarTerminal();
}

bool AuctionItemAdapter::isSold() {
	return ((AuctionItemImplementation*) impl)->isSold();
}

bool AuctionItemAdapter::isAuction() {
	return ((AuctionItemImplementation*) impl)->isAuction();
}

bool AuctionItemAdapter::isRemovedByOwner() {
	return ((AuctionItemImplementation*) impl)->isRemovedByOwner();
}

unsigned long long AuctionItemAdapter::getAuctionedItemObjectID() {
	return ((AuctionItemImplementation*) impl)->getAuctionedItemObjectID();
}

unsigned long long AuctionItemAdapter::getOwnerID() {
	return ((AuctionItemImplementation*) impl)->getOwnerID();
}

String AuctionItemAdapter::getTerminalTitle() {
	return ((AuctionItemImplementation*) impl)->getTerminalTitle();
}

String AuctionItemAdapter::getOwnerName() {
	return ((AuctionItemImplementation*) impl)->getOwnerName();
}

String AuctionItemAdapter::getItemName() {
	return ((AuctionItemImplementation*) impl)->getItemName();
}

int AuctionItemAdapter::getExpireTime() {
	return ((AuctionItemImplementation*) impl)->getExpireTime();
}

int AuctionItemAdapter::getPrice() {
	return ((AuctionItemImplementation*) impl)->getPrice();
}

int AuctionItemAdapter::getItemType() {
	return ((AuctionItemImplementation*) impl)->getItemType();
}

unsigned long long AuctionItemAdapter::getBuyerID() {
	return ((AuctionItemImplementation*) impl)->getBuyerID();
}

String AuctionItemAdapter::getBidderName() {
	return ((AuctionItemImplementation*) impl)->getBidderName();
}

String AuctionItemAdapter::getItemDescription() {
	return ((AuctionItemImplementation*) impl)->getItemDescription();
}

String AuctionItemAdapter::getLocation() {
	return ((AuctionItemImplementation*) impl)->getLocation();
}

/*
 *	AuctionItemHelper
 */

AuctionItemHelper* AuctionItemHelper::staticInitializer = AuctionItemHelper::instance();

AuctionItemHelper::AuctionItemHelper() {
	className = "AuctionItem";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void AuctionItemHelper::finalizeHelper() {
	AuctionItemHelper::finalize();
}

DistributedObject* AuctionItemHelper::instantiateObject() {
	return new AuctionItem(DummyConstructorParameter::instance());
}

DistributedObjectServant* AuctionItemHelper::instantiateServant() {
	return new AuctionItemImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* AuctionItemHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new AuctionItemAdapter((AuctionItemImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

