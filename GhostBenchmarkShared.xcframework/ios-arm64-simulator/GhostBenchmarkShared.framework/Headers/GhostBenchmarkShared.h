#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NSString, NSSet<ObjectType>, NSObject, NSNumber, NSMutableSet<ObjectType>, NSMutableDictionary<KeyType, ObjectType>, NSMutableArray<ObjectType>, NSError, NSDictionary<KeyType, ObjectType>, NSData, NSArray<ObjectType>, GBSWriterSinkPair, GBSUShort, GBSULong, GBSUInt, GBSUByte, GBSStringSerializer, GBSStreamingGhostSource, GBSShort, GBSPlatform_nativeKt, GBSPageInfoSerializer, GBSPageInfo, GBSOkioTimeoutCompanion, GBSOkioTimeout, GBSOkioIOException, GBSOkioByteStringCompanion, GBSOkioByteString, GBSOkioBufferUnsafeCursor, GBSOkioBuffer, GBSNumber, GBSMutableSet<ObjectType>, GBSMutableDictionary<KeyType, ObjectType>, GBSMapSerializer<V>, GBSLongSerializer, GBSLongArraySerializer, GBSLong, GBSLocationRefSerializer, GBSLocationRef, GBSListSerializer<T>, GBSKotlinThrowable, GBSKotlinRuntimeException, GBSKotlinLongIterator, GBSKotlinLongArray, GBSKotlinKVariance, GBSKotlinKTypeProjectionCompanion, GBSKotlinKTypeProjection, GBSKotlinIntIterator, GBSKotlinIntArray, GBSKotlinException, GBSKotlinEnumCompanion, GBSKotlinEnum<E>, GBSKotlinCharIterator, GBSKotlinCharArray, GBSKotlinByteIterator, GBSKotlinByteArray, GBSKotlinArray<T>, GBSJsonReaderOptionsCompanion, GBSJsonReaderOptions, GBSIosByteArraySource, GBSIntSerializer, GBSIntArraySerializer, GBSInt, GBSGhostSource_iosKt, GBSGhostSourceKt, GBSGhostPoolsKt, GBSGhostModuleRegistry_ios_benchmarkCompanion, GBSGhostModuleRegistry_ios_benchmark, GBSGhostKt, GBSGhostJsonWriter, GBSGhostJsonReader, GBSGhostJsonFlatWriter, GBSGhostJsonException, GBSGhostJsonConstantsKt, GBSGhostHeuristics, GBSGhostDiscriminatorPeeker, GBSGhostCharacterSerializer, GBSGhostCharacter, GBSGhostBenchmarkBridge, GBSGhost, GBSFloat, GBSFlatByteArrayWriter, GBSDoubleSerializer, GBSDouble, GBSCharacterStatusSerializer, GBSCharacterStatus, GBSCharacterResponseSerializer, GBSCharacterResponse, GBSByte, GBSBooleanSerializer, GBSBoolean, GBSBase;

@protocol NSCopying, GBSOkioSource, GBSOkioSink, GBSOkioCloseable, GBSOkioBufferedSource, GBSOkioBufferedSink, GBSKotlinKType, GBSKotlinKDeclarationContainer, GBSKotlinKClassifier, GBSKotlinKClass, GBSKotlinKAnnotatedElement, GBSKotlinIterator, GBSKotlinComparable, GBSGhostSource, GBSGhostSerializer, GBSGhostRegistry;

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift types with a lambda type argument.
// Example of such type is: A<() -> Unit> where A<T> is a generic class.
// To avoid compilation errors SKIE replaces these type arguments with __SkieLambdaErrorType, resulting in A<__SkieLambdaErrorType>.
// Generated declarations that reference __SkieLambdaErrorType cannot be called in any way and the __SkieLambdaErrorType class cannot be used.
// The original declarations can still be used in the same way as other declarations hidden by SKIE (and with the same limitations as without SKIE).
@interface __SkieLambdaErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift code that uses external Obj-C types for which SKIE doesn't know a fully qualified name.
// This problem occurs when custom Cinterop bindings are used because those do not contain the name of the Framework that provides implementation for those binding.
// The name can be configured manually using the SKIE Gradle configuration key 'ClassInterop.CInteropFrameworkName' in the same way as other SKIE features.
// To avoid compilation errors SKIE replaces types with unknown Framework name with __SkieUnknownCInteropFrameworkErrorType.
// Generated declarations that reference __SkieUnknownCInteropFrameworkErrorType cannot be called in any way and the __SkieUnknownCInteropFrameworkErrorType class cannot be used.
@interface __SkieUnknownCInteropFrameworkErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end


NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface GBSBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface GBSBase (GBSBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface GBSMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface GBSMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorGBSKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface GBSNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface GBSByte : GBSNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface GBSUByte : GBSNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface GBSShort : GBSNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface GBSUShort : GBSNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface GBSInt : GBSNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface GBSUInt : GBSNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface GBSLong : GBSNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface GBSULong : GBSNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface GBSFloat : GBSNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface GBSDouble : GBSNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface GBSBoolean : GBSNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostBenchmarkBridge")))
@interface GBSGhostBenchmarkBridge : GBSBase
@property (class, readonly, getter=shared) GBSGhostBenchmarkBridge *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ghostBenchmarkBridge __attribute__((swift_name("init()")));
- (GBSCharacterResponse *)parseCharacterResponseJson:(NSString *)json __attribute__((swift_name("parseCharacterResponse(json:)")));
- (GBSCharacterResponse *)parseCharacterResponseFromBytesBytes:(GBSKotlinByteArray *)bytes __attribute__((swift_name("parseCharacterResponseFromBytes(bytes:)")));
- (GBSCharacterResponse *)parseCharacterResponseStreamingBytes:(GBSKotlinByteArray *)bytes __attribute__((swift_name("parseCharacterResponseStreaming(bytes:)")));
- (void)prewarm __attribute__((swift_name("prewarm()")));
- (NSString *)serializeCharacterResponseValue:(GBSCharacterResponse *)value __attribute__((swift_name("serializeCharacterResponse(value:)")));
- (void)serializeCharacterResponseStreamingValue:(GBSCharacterResponse *)value __attribute__((swift_name("serializeCharacterResponseStreaming(value:)")));
- (GBSKotlinByteArray *)serializeCharacterResponseToBytesValue:(GBSCharacterResponse *)value __attribute__((swift_name("serializeCharacterResponseToBytes(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharacterResponse")))
@interface GBSCharacterResponse : GBSBase
@property (readonly) GBSPageInfo *info __attribute__((swift_name("info")));
@property (readonly) NSArray<GBSGhostCharacter *> *results __attribute__((swift_name("results")));
- (instancetype)initWithInfo:(GBSPageInfo *)info results:(NSArray<GBSGhostCharacter *> *)results __attribute__((swift_name("init(info:results:)"))) __attribute__((objc_designated_initializer));
- (GBSCharacterResponse *)doCopyInfo:(GBSPageInfo *)info results:(NSArray<GBSGhostCharacter *> *)results __attribute__((swift_name("doCopy(info:results:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("GhostSerializer")))
@protocol GBSGhostSerializer
@required
- (id _Nullable)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (id _Nullable)deserializeSource:(id<GBSOkioBufferedSource>)source __attribute__((swift_name("deserialize(source:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(id _Nullable)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(id _Nullable)value __attribute__((swift_name("serialize(writer:value_:)")));
- (void)serializeSink:(id<GBSOkioBufferedSink>)sink value:(id _Nullable)value __attribute__((swift_name("serialize(sink:value:)")));
- (void)warmUp __attribute__((swift_name("warmUp()")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharacterResponseSerializer")))
@interface GBSCharacterResponseSerializer : GBSBase <GBSGhostSerializer>
@property (class, readonly, getter=shared) GBSCharacterResponseSerializer *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)characterResponseSerializer __attribute__((swift_name("init()")));
- (GBSCharacterResponse *)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(GBSCharacterResponse *)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(GBSCharacterResponse *)value __attribute__((swift_name("serialize(writer:value_:)")));
- (void)warmUp __attribute__((swift_name("warmUp()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol GBSKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface GBSKotlinEnum<E> : GBSBase <GBSKotlinComparable>
@property (class, readonly, getter=companion) GBSKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharacterStatus")))
@interface GBSCharacterStatus : GBSKotlinEnum<GBSCharacterStatus *>
@property (class, readonly) GBSCharacterStatus *alive __attribute__((swift_name("alive")));
@property (class, readonly) GBSCharacterStatus *dead __attribute__((swift_name("dead")));
@property (class, readonly) GBSCharacterStatus *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) NSArray<GBSCharacterStatus *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (GBSKotlinArray<GBSCharacterStatus *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharacterStatusSerializer")))
@interface GBSCharacterStatusSerializer : GBSBase <GBSGhostSerializer>
@property (class, readonly, getter=shared) GBSCharacterStatusSerializer *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)characterStatusSerializer __attribute__((swift_name("init()")));
- (GBSCharacterStatus *)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(GBSCharacterStatus *)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(GBSCharacterStatus *)value __attribute__((swift_name("serialize(writer:value_:)")));
- (void)warmUp __attribute__((swift_name("warmUp()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostCharacter")))
@interface GBSGhostCharacter : GBSBase
@property (readonly) NSString *created __attribute__((swift_name("created")));
@property (readonly) NSArray<NSString *> *episode __attribute__((swift_name("episode")));
@property (readonly) NSString *gender __attribute__((swift_name("gender")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *image __attribute__((swift_name("image")));
@property (readonly) GBSLocationRef *location __attribute__((swift_name("location")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) GBSLocationRef *origin __attribute__((swift_name("origin")));
@property (readonly) NSString *species __attribute__((swift_name("species")));
@property (readonly) GBSCharacterStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
- (instancetype)initWithId:(int32_t)id name:(NSString *)name status:(GBSCharacterStatus *)status species:(NSString *)species type:(NSString *)type gender:(NSString *)gender origin:(GBSLocationRef *)origin location:(GBSLocationRef *)location image:(NSString *)image episode:(NSArray<NSString *> *)episode url:(NSString *)url created:(NSString *)created __attribute__((swift_name("init(id:name:status:species:type:gender:origin:location:image:episode:url:created:)"))) __attribute__((objc_designated_initializer));
- (GBSGhostCharacter *)doCopyId:(int32_t)id name:(NSString *)name status:(GBSCharacterStatus *)status species:(NSString *)species type:(NSString *)type gender:(NSString *)gender origin:(GBSLocationRef *)origin location:(GBSLocationRef *)location image:(NSString *)image episode:(NSArray<NSString *> *)episode url:(NSString *)url created:(NSString *)created __attribute__((swift_name("doCopy(id:name:status:species:type:gender:origin:location:image:episode:url:created:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostCharacterSerializer")))
@interface GBSGhostCharacterSerializer : GBSBase <GBSGhostSerializer>
@property (class, readonly, getter=shared) GBSGhostCharacterSerializer *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ghostCharacterSerializer __attribute__((swift_name("init()")));
- (GBSGhostCharacter *)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(GBSGhostCharacter *)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(GBSGhostCharacter *)value __attribute__((swift_name("serialize(writer:value_:)")));
- (void)warmUp __attribute__((swift_name("warmUp()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationRef")))
@interface GBSLocationRef : GBSBase
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
- (instancetype)initWithName:(NSString *)name url:(NSString *)url __attribute__((swift_name("init(name:url:)"))) __attribute__((objc_designated_initializer));
- (GBSLocationRef *)doCopyName:(NSString *)name url:(NSString *)url __attribute__((swift_name("doCopy(name:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationRefSerializer")))
@interface GBSLocationRefSerializer : GBSBase <GBSGhostSerializer>
@property (class, readonly, getter=shared) GBSLocationRefSerializer *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)locationRefSerializer __attribute__((swift_name("init()")));
- (GBSLocationRef *)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(GBSLocationRef *)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(GBSLocationRef *)value __attribute__((swift_name("serialize(writer:value_:)")));
- (void)warmUp __attribute__((swift_name("warmUp()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageInfo")))
@interface GBSPageInfo : GBSBase
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSString * _Nullable next __attribute__((swift_name("next")));
@property (readonly) int32_t pages __attribute__((swift_name("pages")));
@property (readonly) NSString * _Nullable prev __attribute__((swift_name("prev")));
- (instancetype)initWithCount:(int32_t)count pages:(int32_t)pages next:(NSString * _Nullable)next prev:(NSString * _Nullable)prev __attribute__((swift_name("init(count:pages:next:prev:)"))) __attribute__((objc_designated_initializer));
- (GBSPageInfo *)doCopyCount:(int32_t)count pages:(int32_t)pages next:(NSString * _Nullable)next prev:(NSString * _Nullable)prev __attribute__((swift_name("doCopy(count:pages:next:prev:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageInfoSerializer")))
@interface GBSPageInfoSerializer : GBSBase <GBSGhostSerializer>
@property (class, readonly, getter=shared) GBSPageInfoSerializer *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pageInfoSerializer __attribute__((swift_name("init()")));
- (GBSPageInfo *)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(GBSPageInfo *)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(GBSPageInfo *)value __attribute__((swift_name("serialize(writer:value_:)")));
- (void)warmUp __attribute__((swift_name("warmUp()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ghost")))
@interface GBSGhost : GBSBase
@property (class, readonly, getter=shared) GBSGhost *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *MISSING_ANN __attribute__((swift_name("MISSING_ANN")));
@property (readonly) NSString *NOT_FOUND __attribute__((swift_name("NOT_FOUND")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ghost __attribute__((swift_name("init()")));
- (void)addRegistryRegistry:(id<GBSGhostRegistry>)registry __attribute__((swift_name("addRegistry(registry:)")));
- (id)decodeFromBytesBytes:(GBSKotlinByteArray *)bytes clazz:(id<GBSKotlinKClass>)clazz __attribute__((swift_name("decodeFromBytes(bytes:clazz:)")));
- (id)decodeFromSourceSource:(id<GBSOkioBufferedSource>)source clazz:(id<GBSKotlinKClass>)clazz __attribute__((swift_name("decodeFromSource(source:clazz:)")));
- (id)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (id)deserializeBytes:(GBSKotlinByteArray *)bytes __attribute__((swift_name("deserialize(bytes:)")));
- (id)deserializeJson:(NSString *)json __attribute__((swift_name("deserialize(json:)")));
- (id)deserializeSource:(id<GBSOkioBufferedSource>)source __attribute__((swift_name("deserialize(source:)")));
- (id)deserializeBytes:(GBSKotlinByteArray *)bytes options:(void (^)(GBSGhostJsonReader *))options __attribute__((swift_name("deserialize(bytes:options:)")));
- (id)deserializeJson:(NSString *)json options:(void (^)(GBSGhostJsonReader *))options __attribute__((swift_name("deserialize(json:options:)")));
- (id)deserializeSource:(id<GBSOkioBufferedSource>)source options:(void (^)(GBSGhostJsonReader *))options __attribute__((swift_name("deserialize(source:options:)")));
- (void)encodeAndDiscardValue:(id)value __attribute__((swift_name("encodeAndDiscard(value:)")));
- (GBSKotlinByteArray *)encodeToBytesValue:(id)value __attribute__((swift_name("encodeToBytes(value:)")));
- (void)encodeToSinkSink:(id<GBSOkioBufferedSink>)sink value:(id)value __attribute__((swift_name("encodeToSink(sink:value:)")));
- (void)encodeToSinkSink:(id<GBSOkioBufferedSink>)sink value:(id)value clazz:(id<GBSKotlinKClass>)clazz __attribute__((swift_name("encodeToSink(sink:value:clazz:)")));
- (NSString *)encodeToStringValue:(id)value __attribute__((swift_name("encodeToString(value:)")));
- (id<GBSGhostSerializer> _Nullable)getSerializerClazz:(id<GBSKotlinKClass>)clazz __attribute__((swift_name("getSerializer(clazz:)")));
- (id<GBSGhostSerializer> _Nullable)getSerializerType:(id<GBSKotlinKType>)type __attribute__((swift_name("getSerializer(type:)")));
- (id<GBSGhostSerializer> _Nullable)getSerializerByNameName:(NSString *)name __attribute__((swift_name("getSerializerByName(name:)")));
- (NSArray<NSString *> *)getSerializerNames __attribute__((swift_name("getSerializerNames()")));
- (void)prewarm __attribute__((swift_name("prewarm()")));
- (void)resetForTest __attribute__((swift_name("resetForTest()")));
- (NSString *)serializeValue:(id)value __attribute__((swift_name("serialize(value:)")));
- (void)serializeSink:(id<GBSOkioBufferedSink>)sink value:(id)value __attribute__((swift_name("serialize(sink:value:)")));
- (void)throwErrorMessage:(NSString *)message __attribute__((swift_name("throwError(message:)")));
@end

__attribute__((swift_name("GhostRegistry")))
@protocol GBSGhostRegistry
@required
- (NSDictionary<id<GBSKotlinKClass>, id<GBSGhostSerializer>> *)getAllSerializers __attribute__((swift_name("getAllSerializers()")));
- (id<GBSGhostSerializer> _Nullable)getSerializerClazz:(id<GBSKotlinKClass>)clazz __attribute__((swift_name("getSerializer(clazz:)")));
- (void)prewarm __attribute__((swift_name("prewarm()")));
- (int32_t)registeredCount __attribute__((swift_name("registeredCount()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface GBSKotlinThrowable : GBSBase
@property (readonly) GBSKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GBSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GBSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (GBSKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface GBSKotlinException : GBSKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GBSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GBSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface GBSKotlinRuntimeException : GBSKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GBSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GBSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostJsonException")))
@interface GBSGhostJsonException : GBSKotlinRuntimeException
@property (readonly) int32_t column __attribute__((swift_name("column")));
@property (readonly) int32_t line __attribute__((swift_name("line")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
- (instancetype)initWithMessage:(NSString *)message line:(int32_t)line column:(int32_t)column path:(NSString *)path __attribute__((swift_name("init(message:line:column:path:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(GBSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GBSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostModuleRegistry_ios_benchmark")))
@interface GBSGhostModuleRegistry_ios_benchmark : GBSBase <GBSGhostRegistry>
@property (class, readonly, getter=companion) GBSGhostModuleRegistry_ios_benchmarkCompanion *companion __attribute__((swift_name("companion")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSDictionary<id<GBSKotlinKClass>, id<GBSGhostSerializer>> *)getAllSerializers __attribute__((swift_name("getAllSerializers()")));
- (id<GBSGhostSerializer> _Nullable)getSerializerClazz:(id<GBSKotlinKClass>)clazz __attribute__((swift_name("getSerializer(clazz:)")));
- (void)prewarm __attribute__((swift_name("prewarm()")));
- (int32_t)registeredCount __attribute__((swift_name("registeredCount()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostModuleRegistry_ios_benchmark.Companion")))
@interface GBSGhostModuleRegistry_ios_benchmarkCompanion : GBSBase
@property (class, readonly, getter=shared) GBSGhostModuleRegistry_ios_benchmarkCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) GBSGhostModuleRegistry_ios_benchmark *INSTANCE __attribute__((swift_name("INSTANCE")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostDiscriminatorPeeker")))
@interface GBSGhostDiscriminatorPeeker : GBSBase
@property (class, readonly, getter=shared) GBSGhostDiscriminatorPeeker *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ghostDiscriminatorPeeker __attribute__((swift_name("init()")));
- (NSString * _Nullable)peekSource:(id<GBSGhostSource>)source rawData:(GBSKotlinByteArray *)rawData isStreaming:(BOOL)isStreaming start:(int32_t)start limit:(int32_t)limit key:(GBSOkioByteString *)key __attribute__((swift_name("peek(source:rawData:isStreaming:start:limit:key:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostHeuristics")))
@interface GBSGhostHeuristics : GBSBase
@property (class, readonly, getter=shared) GBSGhostHeuristics *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t initialCollectionCapacity __attribute__((swift_name("initialCollectionCapacity")));
@property (readonly) int32_t maxCollectionSize __attribute__((swift_name("maxCollectionSize")));
@property (readonly) int32_t maxDiscriminatorPeekDistance __attribute__((swift_name("maxDiscriminatorPeekDistance")));
@property (readonly) int32_t maxStringPoolLength __attribute__((swift_name("maxStringPoolLength")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ghostHeuristics __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostJsonReader")))
@interface GBSGhostJsonReader : GBSBase
@property BOOL coerceStringsToNumbers __attribute__((swift_name("coerceStringsToNumbers")));
@property int32_t depth __attribute__((swift_name("depth")));
@property int32_t maxCollectionSize __attribute__((swift_name("maxCollectionSize")));
@property int32_t maxDepth __attribute__((swift_name("maxDepth")));
@property BOOL strictMode __attribute__((swift_name("strictMode")));
- (instancetype)initWithBytes:(GBSKotlinByteArray *)bytes maxDepth:(int32_t)maxDepth strictMode:(BOOL)strictMode coerceStringsToNumbers:(BOOL)coerceStringsToNumbers maxCollectionSize:(int32_t)maxCollectionSize __attribute__((swift_name("init(bytes:maxDepth:strictMode:coerceStringsToNumbers:maxCollectionSize:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithOkioSource:(id<GBSOkioBufferedSource>)okioSource maxDepth:(int32_t)maxDepth strictMode:(BOOL)strictMode coerceStringsToNumbers:(BOOL)coerceStringsToNumbers maxCollectionSize:(int32_t)maxCollectionSize __attribute__((swift_name("init(okioSource:maxDepth:strictMode:coerceStringsToNumbers:maxCollectionSize:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSource:(id<GBSGhostSource>)source limit:(int32_t)limit maxDepth:(int32_t)maxDepth strictMode:(BOOL)strictMode coerceStringsToNumbers:(BOOL)coerceStringsToNumbers maxCollectionSize:(int32_t)maxCollectionSize __attribute__((swift_name("init(source:limit:maxDepth:strictMode:coerceStringsToNumbers:maxCollectionSize:)"))) __attribute__((objc_designated_initializer));
- (void)expectByteExpected:(int32_t)expected __attribute__((swift_name("expectByte(expected:)")));
- (void)internalSkipN:(int32_t)n __attribute__((swift_name("internalSkip(n:)")));
- (int32_t)nextNonWhitespace __attribute__((swift_name("nextNonWhitespace()")));
- (int32_t)nextToken __attribute__((swift_name("nextToken()")));
- (int8_t)peekByte __attribute__((swift_name("peekByte()")));
- (NSString * _Nullable)peekDiscriminatorKey:(NSString *)key __attribute__((swift_name("peekDiscriminator(key:)")));
- (NSString * _Nullable)peekDiscriminatorKey_:(GBSOkioByteString *)key __attribute__((swift_name("peekDiscriminator(key_:)")));
- (int32_t)peekNextToken __attribute__((swift_name("peekNextToken()")));
- (NSString *)readQuotedString __attribute__((swift_name("readQuotedString()")));
- (void)resetOkioSource:(id<GBSOkioBufferedSource>)okioSource __attribute__((swift_name("reset(okioSource:)")));
- (void)resetNewSource:(id<GBSGhostSource>)newSource newLimit:(int32_t)newLimit __attribute__((swift_name("reset(newSource:newLimit:)")));
- (void)resetNewData:(GBSKotlinByteArray *)newData newLimit:(int32_t)newLimit __attribute__((swift_name("reset(newData:newLimit:)")));
- (void)skipAndValidateLiteralExpected:(GBSKotlinByteArray *)expected __attribute__((swift_name("skipAndValidateLiteral(expected:)")));
- (void)skipAndValidateLiteralExpected_:(GBSOkioByteString *)expected __attribute__((swift_name("skipAndValidateLiteral(expected_:)")));
- (void)skipQuotedString __attribute__((swift_name("skipQuotedString()")));
- (void)skipWhitespace __attribute__((swift_name("skipWhitespace()")));
- (void)throwErrorMessage:(NSString *)message __attribute__((swift_name("throwError(message:)")));
@end

__attribute__((swift_name("GhostSource")))
@protocol GBSGhostSource
@required
- (int32_t)calculateHashStart:(int32_t)start length:(int32_t)length __attribute__((swift_name("calculateHash(start:length:)")));
- (BOOL)contentEqualsStart:(int32_t)start expected:(GBSOkioByteString *)expected __attribute__((swift_name("contentEquals(start:expected:)")));
- (BOOL)contentEqualsStringStart:(int32_t)start length:(int32_t)length str:(NSString *)str __attribute__((swift_name("contentEqualsString(start:length:str:)")));
- (void)doCopyToSink:(GBSKotlinByteArray *)sink sinkOffset:(int32_t)sinkOffset start:(int32_t)start count:(int32_t)count __attribute__((swift_name("doCopyTo(sink:sinkOffset:start:count:)")));
- (NSString *)decodeJsonStringRangeStart:(int32_t)start end:(int32_t)end isKnown7BitContent:(BOOL)isKnown7BitContent __attribute__((swift_name("decodeJsonStringRange(start:end:isKnown7BitContent:)")));
- (NSString *)decodeToStringStart:(int32_t)start end:(int32_t)end __attribute__((swift_name("decodeToString(start:end:)")));
- (int32_t)findClosingQuotePosition:(int32_t)position limit:(int32_t)limit __attribute__((swift_name("findClosingQuote(position:limit:)")));
- (int32_t)findNextNonWhitespacePosition:(int32_t)position limit:(int32_t)limit __attribute__((swift_name("findNextNonWhitespace(position:limit:)")));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (int32_t)scanStringStart:(int32_t)start limit:(int32_t)limit reader:(GBSGhostJsonReader *)reader __attribute__((swift_name("scanString(start:limit:reader:)")));
@property (readonly) GBSKotlinByteArray *rawSourceData __attribute__((swift_name("rawSourceData")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosByteArraySource")))
@interface GBSIosByteArraySource : GBSBase <GBSGhostSource>
@property (readonly) GBSKotlinByteArray *data __attribute__((swift_name("data")));
@property (readonly) GBSKotlinByteArray *rawSourceData __attribute__((swift_name("rawSourceData")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
- (instancetype)initWithData:(GBSKotlinByteArray *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (int32_t)calculateHashStart:(int32_t)start length:(int32_t)length __attribute__((swift_name("calculateHash(start:length:)")));
- (BOOL)contentEqualsStart:(int32_t)start expected:(GBSOkioByteString *)expected __attribute__((swift_name("contentEquals(start:expected:)")));
- (BOOL)contentEqualsStringStart:(int32_t)start length:(int32_t)length str:(NSString *)str __attribute__((swift_name("contentEqualsString(start:length:str:)")));
- (void)doCopyToSink:(GBSKotlinByteArray *)sink sinkOffset:(int32_t)sinkOffset start:(int32_t)start count:(int32_t)count __attribute__((swift_name("doCopyTo(sink:sinkOffset:start:count:)")));
- (NSString *)decodeToStringStart:(int32_t)start end:(int32_t)end __attribute__((swift_name("decodeToString(start:end:)")));
- (int32_t)findClosingQuotePosition:(int32_t)position limit:(int32_t)limit __attribute__((swift_name("findClosingQuote(position:limit:)")));
- (int32_t)findNextNonWhitespacePosition:(int32_t)position limit:(int32_t)limit __attribute__((swift_name("findNextNonWhitespace(position:limit:)")));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (int32_t)scanStringStart:(int32_t)start limit:(int32_t)limit reader:(GBSGhostJsonReader *)reader __attribute__((swift_name("scanString(start:limit:reader:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonReaderOptions")))
@interface GBSJsonReaderOptions : GBSBase
@property (class, readonly, getter=companion) GBSJsonReaderOptionsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) GBSKotlinArray<GBSOkioByteString *> *writerFirstHeaders __attribute__((swift_name("writerFirstHeaders")));
@property (readonly) GBSKotlinArray<GBSOkioByteString *> *writerHeaders __attribute__((swift_name("writerHeaders")));
@property (readonly) GBSKotlinArray<GBSOkioByteString *> *writerHeadersWithComma __attribute__((swift_name("writerHeadersWithComma")));
- (instancetype)initWithRawBytes:(GBSKotlinArray<GBSOkioByteString *> *)rawBytes writerHeaders:(GBSKotlinArray<GBSOkioByteString *> *)writerHeaders writerHeadersWithComma:(GBSKotlinArray<GBSOkioByteString *> *)writerHeadersWithComma writerFirstHeaders:(GBSKotlinArray<GBSOkioByteString *> *)writerFirstHeaders rawInts:(GBSKotlinArray<GBSKotlinIntArray *> *)rawInts shift:(int32_t)shift multiplier:(int32_t)multiplier __attribute__((swift_name("init(rawBytes:writerHeaders:writerHeadersWithComma:writerFirstHeaders:rawInts:shift:multiplier:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonReaderOptions.Companion")))
@interface GBSJsonReaderOptionsCompanion : GBSBase
@property (class, readonly, getter=shared) GBSJsonReaderOptionsCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (GBSJsonReaderOptions *)ofNames:(GBSKotlinArray<NSString *> *)names __attribute__((swift_name("of(names:)")));
- (GBSJsonReaderOptions *)ofShift:(int32_t)shift multiplier:(int32_t)multiplier names:(GBSKotlinArray<NSString *> *)names __attribute__((swift_name("of(shift:multiplier:names:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StreamingGhostSource")))
@interface GBSStreamingGhostSource : GBSBase <GBSGhostSource>
@property (readonly) id<GBSOkioBufferedSource> okioSource __attribute__((swift_name("okioSource")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
- (instancetype)initWithOkioSource:(id<GBSOkioBufferedSource>)okioSource __attribute__((swift_name("init(okioSource:)"))) __attribute__((objc_designated_initializer));
- (int32_t)calculateHashStart:(int32_t)start length:(int32_t)length __attribute__((swift_name("calculateHash(start:length:)")));
- (BOOL)contentEqualsStart:(int32_t)start expected:(GBSOkioByteString *)expected __attribute__((swift_name("contentEquals(start:expected:)")));
- (BOOL)contentEqualsStringStart:(int32_t)start length:(int32_t)length str:(NSString *)str __attribute__((swift_name("contentEqualsString(start:length:str:)")));
- (void)doCopyToSink:(GBSKotlinByteArray *)sink sinkOffset:(int32_t)sinkOffset start:(int32_t)start count:(int32_t)count __attribute__((swift_name("doCopyTo(sink:sinkOffset:start:count:)")));
- (NSString *)decodeToStringStart:(int32_t)start end:(int32_t)end __attribute__((swift_name("decodeToString(start:end:)")));
- (int32_t)findClosingQuotePosition:(int32_t)position limit:(int32_t)limit __attribute__((swift_name("findClosingQuote(position:limit:)")));
- (int32_t)findNextNonWhitespacePosition:(int32_t)position limit:(int32_t)limit __attribute__((swift_name("findNextNonWhitespace(position:limit:)")));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (int32_t)scanStringStart:(int32_t)start limit:(int32_t)limit reader:(GBSGhostJsonReader *)reader __attribute__((swift_name("scanString(start:limit:reader:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BooleanSerializer")))
@interface GBSBooleanSerializer : GBSBase <GBSGhostSerializer>
@property (class, readonly, getter=shared) GBSBooleanSerializer *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)booleanSerializer __attribute__((swift_name("init()")));
- (GBSBoolean *)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(GBSBoolean *)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(GBSBoolean *)value __attribute__((swift_name("serialize(writer:value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleSerializer")))
@interface GBSDoubleSerializer : GBSBase <GBSGhostSerializer>
@property (class, readonly, getter=shared) GBSDoubleSerializer *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)doubleSerializer __attribute__((swift_name("init()")));
- (GBSDouble *)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(GBSDouble *)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(GBSDouble *)value __attribute__((swift_name("serialize(writer:value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntArraySerializer")))
@interface GBSIntArraySerializer : GBSBase <GBSGhostSerializer>
@property (class, readonly, getter=shared) GBSIntArraySerializer *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)intArraySerializer __attribute__((swift_name("init()")));
- (GBSKotlinIntArray *)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(GBSKotlinIntArray *)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(GBSKotlinIntArray *)value __attribute__((swift_name("serialize(writer:value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntSerializer")))
@interface GBSIntSerializer : GBSBase <GBSGhostSerializer>
@property (class, readonly, getter=shared) GBSIntSerializer *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)intSerializer __attribute__((swift_name("init()")));
- (GBSInt *)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(GBSInt *)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(GBSInt *)value __attribute__((swift_name("serialize(writer:value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListSerializer")))
@interface GBSListSerializer<T> : GBSBase <GBSGhostSerializer>
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
- (instancetype)initWithItemSerializer:(id<GBSGhostSerializer>)itemSerializer __attribute__((swift_name("init(itemSerializer:)"))) __attribute__((objc_designated_initializer));
- (NSArray<id> *)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(NSArray<id> *)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(NSArray<id> *)value __attribute__((swift_name("serialize(writer:value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LongArraySerializer")))
@interface GBSLongArraySerializer : GBSBase <GBSGhostSerializer>
@property (class, readonly, getter=shared) GBSLongArraySerializer *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)longArraySerializer __attribute__((swift_name("init()")));
- (GBSKotlinLongArray *)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(GBSKotlinLongArray *)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(GBSKotlinLongArray *)value __attribute__((swift_name("serialize(writer:value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LongSerializer")))
@interface GBSLongSerializer : GBSBase <GBSGhostSerializer>
@property (class, readonly, getter=shared) GBSLongSerializer *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)longSerializer __attribute__((swift_name("init()")));
- (GBSLong *)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(GBSLong *)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(GBSLong *)value __attribute__((swift_name("serialize(writer:value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapSerializer")))
@interface GBSMapSerializer<V> : GBSBase <GBSGhostSerializer>
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
- (instancetype)initWithValueSerializer:(id<GBSGhostSerializer>)valueSerializer __attribute__((swift_name("init(valueSerializer:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(NSDictionary<NSString *, id> *)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(NSDictionary<NSString *, id> *)value __attribute__((swift_name("serialize(writer:value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringSerializer")))
@interface GBSStringSerializer : GBSBase <GBSGhostSerializer>
@property (class, readonly, getter=shared) GBSStringSerializer *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *typeName __attribute__((swift_name("typeName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)stringSerializer __attribute__((swift_name("init()")));
- (NSString *)deserializeReader:(GBSGhostJsonReader *)reader __attribute__((swift_name("deserialize(reader:)")));
- (void)serializeWriter:(GBSGhostJsonFlatWriter *)writer value:(NSString *)value __attribute__((swift_name("serialize(writer:value:)")));
- (void)serializeWriter:(GBSGhostJsonWriter *)writer value_:(NSString *)value __attribute__((swift_name("serialize(writer:value_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlatByteArrayWriter")))
@interface GBSFlatByteArrayWriter : GBSBase
@property (readonly) GBSKotlinByteArray *array __attribute__((swift_name("array")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
- (instancetype)initWithInitialCapacity:(int32_t)initialCapacity __attribute__((swift_name("init(initialCapacity:)"))) __attribute__((objc_designated_initializer));
- (void)reset __attribute__((swift_name("reset()")));
- (GBSKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)toStringUtf8 __attribute__((swift_name("toStringUtf8()")));
- (void)writeBytes:(GBSKotlinByteArray *)bytes __attribute__((swift_name("write(bytes:)")));
- (void)writeByteString:(GBSOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (void)writeBytes:(GBSKotlinByteArray *)bytes offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("write(bytes:offset:length:)")));
- (void)writeByteByteAsInt:(int32_t)byteAsInt __attribute__((swift_name("writeByte(byteAsInt:)")));
- (void)writeUtf8Text:(NSString *)text __attribute__((swift_name("writeUtf8(text:)")));
- (void)writeUtf8Text:(NSString *)text beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(text:beginIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostJsonFlatWriter")))
@interface GBSGhostJsonFlatWriter : GBSBase
- (GBSGhostJsonFlatWriter *)beginArray __attribute__((swift_name("beginArray()")));
- (GBSGhostJsonFlatWriter *)beginObject __attribute__((swift_name("beginObject()")));
- (GBSGhostJsonFlatWriter *)endArray __attribute__((swift_name("endArray()")));
- (GBSGhostJsonFlatWriter *)endObject __attribute__((swift_name("endObject()")));
- (void)flush __attribute__((swift_name("flush()")));
- (GBSGhostJsonFlatWriter *)nameKey:(NSString *)key __attribute__((swift_name("name(key:)")));
- (GBSGhostJsonFlatWriter *)nameKey_:(GBSOkioByteString *)key __attribute__((swift_name("name(key_:)")));
- (GBSGhostJsonFlatWriter *)nullValue __attribute__((swift_name("nullValue()")));
- (void)release_ __attribute__((swift_name("release()")));
- (void)reset __attribute__((swift_name("reset()")));
- (GBSGhostJsonFlatWriter *)valueValue:(BOOL)value __attribute__((swift_name("value(value:)")));
- (GBSGhostJsonFlatWriter *)valueNumber:(double)number __attribute__((swift_name("value(number:)")));
- (GBSGhostJsonFlatWriter *)valueNumber_:(float)number __attribute__((swift_name("value(number_:)")));
- (GBSGhostJsonFlatWriter *)valueNumber__:(int32_t)number __attribute__((swift_name("value(number__:)")));
- (GBSGhostJsonFlatWriter *)valueNumber___:(int64_t)number __attribute__((swift_name("value(number___:)")));
- (GBSGhostJsonFlatWriter *)valueText:(NSString *)text __attribute__((swift_name("value(text:)")));
- (void)writeBooleanValueRawValue:(BOOL)value __attribute__((swift_name("writeBooleanValueRaw(value:)")));
- (void)writeDoubleValueRawNumber:(double)number __attribute__((swift_name("writeDoubleValueRaw(number:)")));
- (GBSGhostJsonFlatWriter *)writeFieldHeader:(GBSOkioByteString *)header value:(BOOL)value __attribute__((swift_name("writeField(header:value:)")));
- (GBSGhostJsonFlatWriter *)writeFieldHeader:(GBSOkioByteString *)header value_:(double)value __attribute__((swift_name("writeField(header:value_:)")));
- (GBSGhostJsonFlatWriter *)writeFieldHeader:(GBSOkioByteString *)header value__:(float)value __attribute__((swift_name("writeField(header:value__:)")));
- (GBSGhostJsonFlatWriter *)writeFieldHeader:(GBSOkioByteString *)header value___:(int32_t)value __attribute__((swift_name("writeField(header:value___:)")));
- (GBSGhostJsonFlatWriter *)writeFieldHeader:(GBSOkioByteString *)header value____:(int64_t)value __attribute__((swift_name("writeField(header:value____:)")));
- (GBSGhostJsonFlatWriter *)writeFieldHeader:(GBSOkioByteString *)header value_____:(NSString *)value __attribute__((swift_name("writeField(header:value_____:)")));
- (GBSGhostJsonFlatWriter *)writeFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value:(BOOL)value __attribute__((swift_name("writeField(index:options:value:)")));
- (GBSGhostJsonFlatWriter *)writeFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value_:(double)value __attribute__((swift_name("writeField(index:options:value_:)")));
- (GBSGhostJsonFlatWriter *)writeFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value__:(float)value __attribute__((swift_name("writeField(index:options:value__:)")));
- (GBSGhostJsonFlatWriter *)writeFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value___:(int32_t)value __attribute__((swift_name("writeField(index:options:value___:)")));
- (GBSGhostJsonFlatWriter *)writeFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value____:(int64_t)value __attribute__((swift_name("writeField(index:options:value____:)")));
- (GBSGhostJsonFlatWriter *)writeFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value_____:(NSString *)value __attribute__((swift_name("writeField(index:options:value_____:)")));
- (GBSGhostJsonFlatWriter *)writeFieldWithCommaHeader:(GBSOkioByteString *)header value:(BOOL)value __attribute__((swift_name("writeFieldWithComma(header:value:)")));
- (GBSGhostJsonFlatWriter *)writeFieldWithCommaHeader:(GBSOkioByteString *)header value_:(double)value __attribute__((swift_name("writeFieldWithComma(header:value_:)")));
- (GBSGhostJsonFlatWriter *)writeFieldWithCommaHeader:(GBSOkioByteString *)header value__:(float)value __attribute__((swift_name("writeFieldWithComma(header:value__:)")));
- (GBSGhostJsonFlatWriter *)writeFieldWithCommaHeader:(GBSOkioByteString *)header value___:(int32_t)value __attribute__((swift_name("writeFieldWithComma(header:value___:)")));
- (GBSGhostJsonFlatWriter *)writeFieldWithCommaHeader:(GBSOkioByteString *)header value____:(int64_t)value __attribute__((swift_name("writeFieldWithComma(header:value____:)")));
- (GBSGhostJsonFlatWriter *)writeFieldWithCommaHeader:(GBSOkioByteString *)header value_____:(NSString *)value __attribute__((swift_name("writeFieldWithComma(header:value_____:)")));
- (GBSGhostJsonFlatWriter *)writeFirstFieldHeader:(GBSOkioByteString *)header value:(BOOL)value __attribute__((swift_name("writeFirstField(header:value:)")));
- (GBSGhostJsonFlatWriter *)writeFirstFieldHeader:(GBSOkioByteString *)header value_:(double)value __attribute__((swift_name("writeFirstField(header:value_:)")));
- (GBSGhostJsonFlatWriter *)writeFirstFieldHeader:(GBSOkioByteString *)header value__:(float)value __attribute__((swift_name("writeFirstField(header:value__:)")));
- (GBSGhostJsonFlatWriter *)writeFirstFieldHeader:(GBSOkioByteString *)header value___:(int32_t)value __attribute__((swift_name("writeFirstField(header:value___:)")));
- (GBSGhostJsonFlatWriter *)writeFirstFieldHeader:(GBSOkioByteString *)header value____:(int64_t)value __attribute__((swift_name("writeFirstField(header:value____:)")));
- (GBSGhostJsonFlatWriter *)writeFirstFieldHeader:(GBSOkioByteString *)header value_____:(NSString *)value __attribute__((swift_name("writeFirstField(header:value_____:)")));
- (GBSGhostJsonFlatWriter *)writeFirstFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value:(int32_t)value __attribute__((swift_name("writeFirstField(index:options:value:)")));
- (GBSGhostJsonFlatWriter *)writeFirstFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value_:(int64_t)value __attribute__((swift_name("writeFirstField(index:options:value_:)")));
- (GBSGhostJsonFlatWriter *)writeFirstFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value__:(NSString *)value __attribute__((swift_name("writeFirstField(index:options:value__:)")));
- (void)writeIntValueRawValue:(int32_t)value __attribute__((swift_name("writeIntValueRaw(value:)")));
- (void)writeLongValueRawValue:(int64_t)value __attribute__((swift_name("writeLongValueRaw(value:)")));
- (GBSGhostJsonFlatWriter *)writeNameRawHeader:(GBSOkioByteString *)header __attribute__((swift_name("writeNameRaw(header:)")));
- (GBSGhostJsonFlatWriter *)writeNameRawWithCommaHeader:(GBSOkioByteString *)header __attribute__((swift_name("writeNameRawWithComma(header:)")));
- (void)writeNullValueRaw __attribute__((swift_name("writeNullValueRaw()")));
- (void)writeRawBytes:(GBSKotlinByteArray *)bytes __attribute__((swift_name("writeRaw(bytes:)")));
- (void)writeRawByte:(int32_t)byte __attribute__((swift_name("writeRaw(byte:)")));
- (void)writeStringValueRawValue:(NSString *)value __attribute__((swift_name("writeStringValueRaw(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostJsonWriter")))
@interface GBSGhostJsonWriter : GBSBase
- (instancetype)initWithSink:(id<GBSOkioBufferedSink>)sink __attribute__((swift_name("init(sink:)"))) __attribute__((objc_designated_initializer));
- (GBSGhostJsonWriter *)beginArray __attribute__((swift_name("beginArray()")));
- (GBSGhostJsonWriter *)beginObject __attribute__((swift_name("beginObject()")));
- (GBSGhostJsonWriter *)endArray __attribute__((swift_name("endArray()")));
- (GBSGhostJsonWriter *)endObject __attribute__((swift_name("endObject()")));
- (void)flush __attribute__((swift_name("flush()")));
- (GBSGhostJsonWriter *)nameKey:(NSString *)key __attribute__((swift_name("name(key:)")));
- (GBSGhostJsonWriter *)nameKey_:(GBSOkioByteString *)key __attribute__((swift_name("name(key_:)")));
- (GBSGhostJsonWriter *)nullValue __attribute__((swift_name("nullValue()")));
- (void)release_ __attribute__((swift_name("release()")));
- (void)reset __attribute__((swift_name("reset()")));
- (GBSGhostJsonWriter *)valueValue:(BOOL)value __attribute__((swift_name("value(value:)")));
- (GBSGhostJsonWriter *)valueNumber:(double)number __attribute__((swift_name("value(number:)")));
- (GBSGhostJsonWriter *)valueNumber_:(float)number __attribute__((swift_name("value(number_:)")));
- (GBSGhostJsonWriter *)valueNumber__:(int32_t)number __attribute__((swift_name("value(number__:)")));
- (GBSGhostJsonWriter *)valueNumber___:(int64_t)number __attribute__((swift_name("value(number___:)")));
- (GBSGhostJsonWriter *)valueText:(NSString *)text __attribute__((swift_name("value(text:)")));
- (void)writeBooleanValueRawValue:(BOOL)value __attribute__((swift_name("writeBooleanValueRaw(value:)")));
- (void)writeDoubleValueRawNumber:(double)number __attribute__((swift_name("writeDoubleValueRaw(number:)")));
- (GBSGhostJsonWriter *)writeFieldHeader:(GBSOkioByteString *)header value:(BOOL)value __attribute__((swift_name("writeField(header:value:)")));
- (GBSGhostJsonWriter *)writeFieldHeader:(GBSOkioByteString *)header value_:(double)value __attribute__((swift_name("writeField(header:value_:)")));
- (GBSGhostJsonWriter *)writeFieldHeader:(GBSOkioByteString *)header value__:(float)value __attribute__((swift_name("writeField(header:value__:)")));
- (GBSGhostJsonWriter *)writeFieldHeader:(GBSOkioByteString *)header value___:(int32_t)value __attribute__((swift_name("writeField(header:value___:)")));
- (GBSGhostJsonWriter *)writeFieldHeader:(GBSOkioByteString *)header value____:(int64_t)value __attribute__((swift_name("writeField(header:value____:)")));
- (GBSGhostJsonWriter *)writeFieldHeader:(GBSOkioByteString *)header value_____:(NSString *)value __attribute__((swift_name("writeField(header:value_____:)")));
- (GBSGhostJsonWriter *)writeFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value:(BOOL)value __attribute__((swift_name("writeField(index:options:value:)")));
- (GBSGhostJsonWriter *)writeFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value_:(double)value __attribute__((swift_name("writeField(index:options:value_:)")));
- (GBSGhostJsonWriter *)writeFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value__:(float)value __attribute__((swift_name("writeField(index:options:value__:)")));
- (GBSGhostJsonWriter *)writeFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value___:(int32_t)value __attribute__((swift_name("writeField(index:options:value___:)")));
- (GBSGhostJsonWriter *)writeFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value____:(int64_t)value __attribute__((swift_name("writeField(index:options:value____:)")));
- (GBSGhostJsonWriter *)writeFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value_____:(NSString *)value __attribute__((swift_name("writeField(index:options:value_____:)")));
- (GBSGhostJsonWriter *)writeFieldWithCommaHeader:(GBSOkioByteString *)header value:(BOOL)value __attribute__((swift_name("writeFieldWithComma(header:value:)")));
- (GBSGhostJsonWriter *)writeFieldWithCommaHeader:(GBSOkioByteString *)header value_:(double)value __attribute__((swift_name("writeFieldWithComma(header:value_:)")));
- (GBSGhostJsonWriter *)writeFieldWithCommaHeader:(GBSOkioByteString *)header value__:(float)value __attribute__((swift_name("writeFieldWithComma(header:value__:)")));
- (GBSGhostJsonWriter *)writeFieldWithCommaHeader:(GBSOkioByteString *)header value___:(int32_t)value __attribute__((swift_name("writeFieldWithComma(header:value___:)")));
- (GBSGhostJsonWriter *)writeFieldWithCommaHeader:(GBSOkioByteString *)header value____:(int64_t)value __attribute__((swift_name("writeFieldWithComma(header:value____:)")));
- (GBSGhostJsonWriter *)writeFieldWithCommaHeader:(GBSOkioByteString *)header value_____:(NSString *)value __attribute__((swift_name("writeFieldWithComma(header:value_____:)")));
- (GBSGhostJsonWriter *)writeFirstFieldHeader:(GBSOkioByteString *)header value:(BOOL)value __attribute__((swift_name("writeFirstField(header:value:)")));
- (GBSGhostJsonWriter *)writeFirstFieldHeader:(GBSOkioByteString *)header value_:(double)value __attribute__((swift_name("writeFirstField(header:value_:)")));
- (GBSGhostJsonWriter *)writeFirstFieldHeader:(GBSOkioByteString *)header value__:(float)value __attribute__((swift_name("writeFirstField(header:value__:)")));
- (GBSGhostJsonWriter *)writeFirstFieldHeader:(GBSOkioByteString *)header value___:(int32_t)value __attribute__((swift_name("writeFirstField(header:value___:)")));
- (GBSGhostJsonWriter *)writeFirstFieldHeader:(GBSOkioByteString *)header value____:(int64_t)value __attribute__((swift_name("writeFirstField(header:value____:)")));
- (GBSGhostJsonWriter *)writeFirstFieldHeader:(GBSOkioByteString *)header value_____:(NSString *)value __attribute__((swift_name("writeFirstField(header:value_____:)")));
- (GBSGhostJsonWriter *)writeFirstFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value:(int32_t)value __attribute__((swift_name("writeFirstField(index:options:value:)")));
- (GBSGhostJsonWriter *)writeFirstFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value_:(int64_t)value __attribute__((swift_name("writeFirstField(index:options:value_:)")));
- (GBSGhostJsonWriter *)writeFirstFieldIndex:(int32_t)index options:(GBSJsonReaderOptions *)options value__:(NSString *)value __attribute__((swift_name("writeFirstField(index:options:value__:)")));
- (void)writeIntValueRawValue:(int32_t)value __attribute__((swift_name("writeIntValueRaw(value:)")));
- (void)writeLongValueRawValue:(int64_t)value __attribute__((swift_name("writeLongValueRaw(value:)")));
- (GBSGhostJsonWriter *)writeNameRawHeader:(GBSOkioByteString *)header __attribute__((swift_name("writeNameRaw(header:)")));
- (GBSGhostJsonWriter *)writeNameRawWithCommaHeader:(GBSOkioByteString *)header __attribute__((swift_name("writeNameRawWithComma(header:)")));
- (void)writeNullValueRaw __attribute__((swift_name("writeNullValueRaw()")));
- (void)writeRawBytes:(GBSKotlinByteArray *)bytes __attribute__((swift_name("writeRaw(bytes:)")));
- (void)writeRawByte:(int32_t)byte __attribute__((swift_name("writeRaw(byte:)")));
- (void)writeStringValueRawValue:(NSString *)value __attribute__((swift_name("writeStringValueRaw(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WriterSinkPair")))
@interface GBSWriterSinkPair : GBSBase
@property (readonly) GBSFlatByteArrayWriter *byteWriter __attribute__((swift_name("byteWriter")));
@property (readonly) GBSGhostJsonFlatWriter *writer __attribute__((swift_name("writer")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

@interface GBSGhostJsonReader (Extensions)
- (void)beginArray __attribute__((swift_name("beginArray()")));
- (void)beginObject __attribute__((swift_name("beginObject()")));
- (void)checkCollectionSizeSize:(int32_t)size __attribute__((swift_name("checkCollectionSize(size:)")));
- (void)consumeArraySeparator __attribute__((swift_name("consumeArraySeparator()")));
- (void)consumeKeySeparator __attribute__((swift_name("consumeKeySeparator()")));
- (void)consumeNull __attribute__((swift_name("consumeNull()")));
- (void)endArray __attribute__((swift_name("endArray()")));
- (void)endObject __attribute__((swift_name("endObject()")));
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (BOOL)isNextNullValue __attribute__((swift_name("isNextNullValue()")));
- (BOOL)nextBoolean __attribute__((swift_name("nextBoolean()")));
- (double)nextDouble __attribute__((swift_name("nextDouble()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
- (NSString * _Nullable)nextKey __attribute__((swift_name("nextKey()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
- (NSString *)nextString __attribute__((swift_name("nextString()")));
- (NSString * _Nullable)peekStringFieldName:(NSString *)name __attribute__((swift_name("peekStringField(name:)")));
- (NSArray<id> *)readListItemParser:(id _Nullable (^)(void))itemParser __attribute__((swift_name("readList(itemParser:)")));
- (NSDictionary<id, id> *)readMapKeyParser:(id _Nullable (^)(void))keyParser valueParser:(id _Nullable (^)(void))valueParser __attribute__((swift_name("readMap(keyParser:valueParser:)")));
- (int32_t)selectNameAndConsumeOptions:(GBSJsonReaderOptions *)options __attribute__((swift_name("selectNameAndConsume(options:)")));
- (int32_t)selectStringOptions:(GBSJsonReaderOptions *)options __attribute__((swift_name("selectString(options:)")));
- (void)skipNumber __attribute__((swift_name("skipNumber()")));
- (void)skipValue __attribute__((swift_name("skipValue()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostKt")))
@interface GBSGhostKt : GBSBase
+ (GBSMutableDictionary<id, id> *)createAtomicMap __attribute__((swift_name("createAtomicMap()")));
+ (NSArray<id<GBSGhostRegistry>> *)discoverRegistries __attribute__((swift_name("discoverRegistries()")));
+ (void)ghostInternalEncodeAndDiscardBlock:(void (^)(GBSGhostJsonFlatWriter *))block __attribute__((swift_name("ghostInternalEncodeAndDiscard(block:)")));
+ (void)ghostInternalEncodeAndDrainToSink:(id<GBSOkioBufferedSink>)sink block:(void (^)(GBSGhostJsonFlatWriter *))block __attribute__((swift_name("ghostInternalEncodeAndDrainTo(sink:block:)")));
+ (NSString *)ghostInternalEncodeToStringBlock:(void (^)(GBSGhostJsonFlatWriter *))block __attribute__((swift_name("ghostInternalEncodeToString(block:)")));
+ (GBSKotlinByteArray *)ghostInternalEncodeWithWriterBlock:(void (^)(GBSGhostJsonFlatWriter *))block __attribute__((swift_name("ghostInternalEncodeWithWriter(block:)")));
+ (id _Nullable)ghostInternalUseReaderBytes:(GBSKotlinByteArray *)bytes block:(id _Nullable (^)(GBSGhostJsonReader *))block __attribute__((swift_name("ghostInternalUseReader(bytes:block:)")));
+ (id _Nullable)ghostInternalUseSourceSource:(id<GBSOkioBufferedSource>)source block:(id _Nullable (^)(GBSGhostJsonReader *))block __attribute__((swift_name("ghostInternalUseSource(source:block:)")));
+ (id _Nullable)runSynchronizedLock:(id)lock block:(id _Nullable (^)(void))block __attribute__((swift_name("runSynchronized(lock:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostJsonConstantsKt")))
@interface GBSGhostJsonConstantsKt : GBSBase
+ (void)ignore:(id _Nullable)receiver __attribute__((swift_name("ignore(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostPoolsKt")))
@interface GBSGhostPoolsKt : GBSBase
+ (GBSKotlinCharArray *)acquireCharBufferMinSize:(int32_t)minSize __attribute__((swift_name("acquireCharBuffer(minSize:)")));
+ (GBSKotlinByteArray *)acquireScratchBufferMinSize:(int32_t)minSize __attribute__((swift_name("acquireScratchBuffer(minSize:)")));
+ (void)releaseCharBufferBuffer:(GBSKotlinCharArray *)buffer __attribute__((swift_name("releaseCharBuffer(buffer:)")));
+ (void)releaseScratchBufferBuffer:(GBSKotlinByteArray *)buffer __attribute__((swift_name("releaseScratchBuffer(buffer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostSource_iosKt")))
@interface GBSGhostSource_iosKt : GBSBase
+ (id<GBSGhostSource>)createByteArraySourceData:(GBSKotlinByteArray *)data __attribute__((swift_name("createByteArraySource(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GhostSourceKt")))
@interface GBSGhostSourceKt : GBSBase
+ (id<GBSGhostSource>)createSourceBridgeSource:(id<GBSOkioBufferedSource>)source __attribute__((swift_name("createSourceBridge(source:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_nativeKt")))
@interface GBSPlatform_nativeKt : GBSBase
@property (class, readonly) BOOL isJvm __attribute__((swift_name("isJvm")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface GBSKotlinByteArray : GBSBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(GBSByte *(^)(GBSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (GBSKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((swift_name("OkioCloseable")))
@protocol GBSOkioCloseable
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("OkioSource")))
@protocol GBSOkioSource <GBSOkioCloseable>
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(GBSOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (GBSOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
@end

__attribute__((swift_name("OkioBufferedSource")))
@protocol GBSOkioBufferedSource <GBSOkioSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfBytes:(GBSOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfBytes:(GBSOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfElementTargetBytes:(GBSOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(GBSOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (id<GBSOkioBufferedSource>)peek __attribute__((swift_name("peek()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(GBSOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(GBSOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(GBSKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(GBSKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));
- (int64_t)readAllSink:(id<GBSOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (GBSKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (GBSKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (GBSOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (GBSOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(GBSKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(GBSOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<GBSOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (id _Nullable)selectOptions_:(NSArray<id> *)options __attribute__((swift_name("select(options_:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
@property (readonly) GBSOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((swift_name("OkioSink")))
@protocol GBSOkioSink <GBSOkioCloseable>
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (GBSOkioTimeout *)timeout __attribute__((swift_name("timeout()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(GBSOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
@end

__attribute__((swift_name("OkioBufferedSink")))
@protocol GBSOkioBufferedSink <GBSOkioSink>
@required
- (id<GBSOkioBufferedSink>)emit __attribute__((swift_name("emit()")));
- (id<GBSOkioBufferedSink>)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (id<GBSOkioBufferedSink>)writeSource:(GBSKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (id<GBSOkioBufferedSink>)writeByteString:(GBSOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (id<GBSOkioBufferedSink>)writeSource:(id<GBSOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (id<GBSOkioBufferedSink>)writeSource:(GBSKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));
- (id<GBSOkioBufferedSink>)writeByteString:(GBSOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (int64_t)writeAllSource:(id<GBSOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (id<GBSOkioBufferedSink>)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (id<GBSOkioBufferedSink>)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (id<GBSOkioBufferedSink>)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (id<GBSOkioBufferedSink>)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (id<GBSOkioBufferedSink>)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (id<GBSOkioBufferedSink>)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (id<GBSOkioBufferedSink>)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (id<GBSOkioBufferedSink>)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (id<GBSOkioBufferedSink>)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (id<GBSOkioBufferedSink>)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (id<GBSOkioBufferedSink>)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (id<GBSOkioBufferedSink>)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) GBSOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface GBSKotlinEnumCompanion : GBSBase
@property (class, readonly, getter=shared) GBSKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface GBSKotlinArray<T> : GBSBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(GBSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<GBSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol GBSKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol GBSKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol GBSKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol GBSKotlinKClass <GBSKotlinKDeclarationContainer, GBSKotlinKAnnotatedElement, GBSKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol GBSKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<GBSKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<GBSKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((swift_name("OkioByteString")))
@interface GBSOkioByteString : GBSBase <GBSKotlinComparable>
@property (class, readonly, getter=companion) GBSOkioByteStringCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
- (NSString *)base64 __attribute__((swift_name("base64()")));
- (NSString *)base64Url __attribute__((swift_name("base64Url()")));
- (int32_t)compareToOther:(GBSOkioByteString *)other __attribute__((swift_name("compareTo(other:)")));
- (void)doCopyIntoOffset:(int32_t)offset target:(GBSKotlinByteArray *)target targetOffset:(int32_t)targetOffset byteCount:(int32_t)byteCount __attribute__((swift_name("doCopyInto(offset:target:targetOffset:byteCount:)")));
- (BOOL)endsWithSuffix:(GBSKotlinByteArray *)suffix __attribute__((swift_name("endsWith(suffix:)")));
- (BOOL)endsWithSuffix_:(GBSOkioByteString *)suffix __attribute__((swift_name("endsWith(suffix_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int8_t)getIndex_:(int32_t)index __attribute__((swift_name("get(index_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)hex __attribute__((swift_name("hex()")));
- (GBSOkioByteString *)hmacSha1Key:(GBSOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (GBSOkioByteString *)hmacSha256Key:(GBSOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (GBSOkioByteString *)hmacSha512Key:(GBSOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int32_t)indexOfOther:(GBSKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex:)")));
- (int32_t)indexOfOther:(GBSOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex_:)")));
- (int32_t)lastIndexOfOther:(GBSKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex:)")));
- (int32_t)lastIndexOfOther:(GBSOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex_:)")));
- (GBSOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(GBSKotlinByteArray *)other otherOffset:(int32_t)otherOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount:)")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(GBSOkioByteString *)other otherOffset:(int32_t)otherOffset byteCount_:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount_:)")));
- (GBSOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (GBSOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (GBSOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (BOOL)startsWithPrefix:(GBSKotlinByteArray *)prefix __attribute__((swift_name("startsWith(prefix:)")));
- (BOOL)startsWithPrefix_:(GBSOkioByteString *)prefix __attribute__((swift_name("startsWith(prefix_:)")));
- (GBSOkioByteString *)substringBeginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("substring(beginIndex:endIndex:)")));
- (GBSOkioByteString *)toAsciiLowercase __attribute__((swift_name("toAsciiLowercase()")));
- (GBSOkioByteString *)toAsciiUppercase __attribute__((swift_name("toAsciiUppercase()")));
- (GBSKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)utf8 __attribute__((swift_name("utf8()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface GBSKotlinIntArray : GBSBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(GBSInt *(^)(GBSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (GBSKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongArray")))
@interface GBSKotlinLongArray : GBSBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(GBSLong *(^)(GBSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int64_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (GBSKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int64_t)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface GBSKotlinCharArray : GBSBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(GBSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (GBSKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol GBSKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface GBSKotlinByteIterator : GBSBase <GBSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (GBSByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer")))
@interface GBSOkioBuffer : GBSBase <GBSOkioBufferedSource, GBSOkioBufferedSink>
@property (readonly) GBSOkioBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
- (int64_t)completeSegmentByteCount __attribute__((swift_name("completeSegmentByteCount()")));
- (GBSOkioBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (GBSOkioBuffer *)doCopyToOut:(GBSOkioBuffer *)out offset:(int64_t)offset __attribute__((swift_name("doCopyTo(out:offset:)")));
- (GBSOkioBuffer *)doCopyToOut:(GBSOkioBuffer *)out offset:(int64_t)offset byteCount:(int64_t)byteCount __attribute__((swift_name("doCopyTo(out:offset:byteCount:)")));
- (GBSOkioBuffer *)emit __attribute__((swift_name("emit()")));
- (GBSOkioBuffer *)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (int8_t)getPos:(int64_t)pos __attribute__((swift_name("get(pos:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (GBSOkioByteString *)hmacSha1Key:(GBSOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (GBSOkioByteString *)hmacSha256Key:(GBSOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (GBSOkioByteString *)hmacSha512Key:(GBSOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfBytes:(GBSOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfBytes:(GBSOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfElementTargetBytes:(GBSOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(GBSOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (GBSOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (id<GBSOkioBufferedSource>)peek __attribute__((swift_name("peek()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(GBSOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(GBSOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(GBSKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(GBSOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (int32_t)readSink:(GBSKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));
- (int64_t)readAllSink:(id<GBSOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (GBSOkioBufferUnsafeCursor *)readAndWriteUnsafeUnsafeCursor:(GBSOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readAndWriteUnsafe(unsafeCursor:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (GBSKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (GBSKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (GBSOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (GBSOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(GBSKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(GBSOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (GBSOkioBufferUnsafeCursor *)readUnsafeUnsafeCursor:(GBSOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readUnsafe(unsafeCursor:)")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<GBSOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (id _Nullable)selectOptions_:(NSArray<id> *)options __attribute__((swift_name("select(options_:)")));
- (GBSOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (GBSOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (GBSOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (GBSOkioByteString *)snapshot __attribute__((swift_name("snapshot()")));
- (GBSOkioByteString *)snapshotByteCount:(int32_t)byteCount __attribute__((swift_name("snapshot(byteCount:)")));
- (GBSOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (GBSOkioBuffer *)writeSource:(GBSKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (GBSOkioBuffer *)writeByteString:(GBSOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(GBSOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
- (GBSOkioBuffer *)writeSource:(id<GBSOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (GBSOkioBuffer *)writeSource:(GBSKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));
- (GBSOkioBuffer *)writeByteString:(GBSOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (int64_t)writeAllSource:(id<GBSOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (GBSOkioBuffer *)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (GBSOkioBuffer *)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (GBSOkioBuffer *)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (GBSOkioBuffer *)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (GBSOkioBuffer *)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (GBSOkioBuffer *)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (GBSOkioBuffer *)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (GBSOkioBuffer *)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (GBSOkioBuffer *)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (GBSOkioBuffer *)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (GBSOkioBuffer *)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (GBSOkioBuffer *)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@end

__attribute__((swift_name("OkioIOException")))
@interface GBSOkioIOException : GBSKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GBSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GBSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("OkioTimeout")))
@interface GBSOkioTimeout : GBSBase
@property (class, readonly, getter=companion) GBSOkioTimeoutCompanion *companion __attribute__((swift_name("companion")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface GBSKotlinKTypeProjection : GBSBase
@property (class, readonly, getter=companion) GBSKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<GBSKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) GBSKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
- (instancetype)initWithVariance:(GBSKotlinKVariance * _Nullable)variance type:(id<GBSKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
- (GBSKotlinKTypeProjection *)doCopyVariance:(GBSKotlinKVariance * _Nullable)variance type:(id<GBSKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioByteString.Companion")))
@interface GBSOkioByteStringCompanion : GBSBase
@property (class, readonly, getter=shared) GBSOkioByteStringCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) GBSOkioByteString *EMPTY __attribute__((swift_name("EMPTY")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (GBSOkioByteString * _Nullable)decodeBase64:(NSString *)receiver __attribute__((swift_name("decodeBase64(_:)")));
- (GBSOkioByteString *)decodeHex:(NSString *)receiver __attribute__((swift_name("decodeHex(_:)")));
- (GBSOkioByteString *)encodeUtf8:(NSString *)receiver __attribute__((swift_name("encodeUtf8(_:)")));
- (GBSOkioByteString *)ofData:(GBSKotlinByteArray *)data __attribute__((swift_name("of(data:)")));
- (GBSOkioByteString *)toByteString:(NSData *)receiver __attribute__((swift_name("toByteString(_:)")));
- (GBSOkioByteString *)toByteString:(GBSKotlinByteArray *)receiver offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("toByteString(_:offset:byteCount:)")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface GBSKotlinIntIterator : GBSBase <GBSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (GBSInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((swift_name("KotlinLongIterator")))
@interface GBSKotlinLongIterator : GBSBase <GBSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (GBSLong *)next __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end

__attribute__((swift_name("KotlinCharIterator")))
@interface GBSKotlinCharIterator : GBSBase <GBSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer.UnsafeCursor")))
@interface GBSOkioBufferUnsafeCursor : GBSBase <GBSOkioCloseable>
@property GBSOkioBuffer * _Nullable buffer __attribute__((swift_name("buffer")));
@property GBSKotlinByteArray * _Nullable data __attribute__((swift_name("data")));
@property int32_t end __attribute__((swift_name("end")));
@property int64_t offset __attribute__((swift_name("offset")));
@property BOOL readWrite __attribute__((swift_name("readWrite")));
@property int32_t start __attribute__((swift_name("start")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
- (int64_t)expandBufferMinByteCount:(int32_t)minByteCount __attribute__((swift_name("expandBuffer(minByteCount:)")));
- (int32_t)next __attribute__((swift_name("next()")));
- (int64_t)resizeBufferNewSize:(int64_t)newSize __attribute__((swift_name("resizeBuffer(newSize:)")));
- (int32_t)seekOffset:(int64_t)offset __attribute__((swift_name("seek(offset:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioTimeout.Companion")))
@interface GBSOkioTimeoutCompanion : GBSBase
@property (class, readonly, getter=shared) GBSOkioTimeoutCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) GBSOkioTimeout *NONE __attribute__((swift_name("NONE")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface GBSKotlinKVariance : GBSKotlinEnum<GBSKotlinKVariance *>
@property (class, readonly) GBSKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) GBSKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) GBSKotlinKVariance *out __attribute__((swift_name("out")));
@property (class, readonly) NSArray<GBSKotlinKVariance *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (GBSKotlinArray<GBSKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface GBSKotlinKTypeProjectionCompanion : GBSBase
@property (class, readonly, getter=shared) GBSKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) GBSKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (GBSKotlinKTypeProjection *)contravariantType:(id<GBSKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (GBSKotlinKTypeProjection *)covariantType:(id<GBSKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (GBSKotlinKTypeProjection *)invariantType:(id<GBSKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
