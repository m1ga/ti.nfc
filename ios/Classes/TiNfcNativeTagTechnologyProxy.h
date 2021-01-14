/**
 * Axway Titanium
 * Copyright (c) 2009-present by Axway Appcelerator. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import "TiNfcTagProxy.h"
#import "TiNfcTagTechnologyProxy.h"

NS_ASSUME_NONNULL_BEGIN

@interface TiNfcNativeTagTechnologyProxy : TiNfcTagTechnologyProxy {
  NFCTagReaderSession *session;
  TiNFCTagProxy *tag;
}

@end

NS_ASSUME_NONNULL_END
