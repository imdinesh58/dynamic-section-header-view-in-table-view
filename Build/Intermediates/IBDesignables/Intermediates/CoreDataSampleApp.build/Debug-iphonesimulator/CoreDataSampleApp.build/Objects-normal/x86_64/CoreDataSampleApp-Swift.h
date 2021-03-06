// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import CoreData;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSPersistentContainer;

SWIFT_CLASS("_TtC17CoreDataSampleApp11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
@property (nonatomic, strong) NSPersistentContainer * _Nonnull persistentContainer;
- (void)saveContext;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIColor;
@class NSCoder;

SWIFT_CLASS("_TtC17CoreDataSampleApp14ButtonExtender")
@interface ButtonExtender : UIButton
@property (nonatomic, strong) UIColor * _Nonnull borderColor;
@property (nonatomic) CGFloat borderWidth;
@property (nonatomic) CGFloat cornurRadius;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
- (void)prepareForInterfaceBuilder;
- (void)setup;
- (void)configure;
- (void)layoutSubviews;
@end

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("JsonAssignedTasks")
@interface JsonAssignedTasks : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface JsonAssignedTasks (SWIFT_EXTENSION(CoreDataSampleApp))
@property (nonatomic, copy) NSString * _Nullable assignedBY;
@property (nonatomic, copy) NSString * _Nullable assignedByName;
@property (nonatomic, copy) NSString * _Nullable assignedByRole;
@property (nonatomic) int16_t assignedTaskID;
@property (nonatomic, copy) NSString * _Nullable assignedToRole;
@property (nonatomic, copy) NSString * _Nullable belongsTo;
@property (nonatomic, copy) NSString * _Nullable branchId;
@property (nonatomic, copy) NSString * _Nullable checkListIds;
@property (nonatomic, copy) NSString * _Nullable dateAssigned;
@property (nonatomic, copy) NSString * _Nullable descriptions;
@property (nonatomic, copy) NSString * _Nullable distributedToId;
@property (nonatomic, copy) NSString * _Nullable distributedToName;
@property (nonatomic, copy) NSString * _Nullable duration;
@property (nonatomic, copy) NSString * _Nullable employeeID;
@property (nonatomic, copy) NSString * _Nullable employeeName;
@property (nonatomic, copy) NSString * _Nullable floorNumber;
@property (nonatomic, copy) NSString * _Nullable image;
@property (nonatomic, copy) NSString * _Nullable imageCount;
@property (nonatomic, copy) NSString * _Nullable isDistributsed;
@property (nonatomic, copy) NSString * _Nullable location;
@property (nonatomic, copy) NSString * _Nullable priorities;
@property (nonatomic, copy) NSString * _Nullable taskListId;
@property (nonatomic, copy) NSString * _Nullable taskStatusID;
@end


SWIFT_CLASS_NAMED("JsonWorkersEmployeeDetails")
@interface JsonWorkersEmployeeDetails : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSObject;

@interface JsonWorkersEmployeeDetails (SWIFT_EXTENSION(CoreDataSampleApp))
@property (nonatomic, copy) NSString * _Nullable activeYN;
@property (nonatomic, copy) NSString * _Nullable address;
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSString * _Nullable employeeID;
@property (nonatomic, copy) NSString * _Nullable employeeLevelID;
@property (nonatomic, copy) NSString * _Nullable employeeStatus;
@property (nonatomic, copy) NSString * _Nullable firstName;
@property (nonatomic, copy) NSString * _Nullable isEnabled;
@property (nonatomic, copy) NSString * _Nullable lastName;
@property (nonatomic, copy) NSString * _Nullable levelName;
@property (nonatomic, copy) NSString * _Nullable phone;
@property (nonatomic, copy) NSString * _Nullable userMobileID;
@property (nonatomic, strong) NSObject * _Nullable workDetails;
@end


SWIFT_CLASS_NAMED("Person")
@interface Person : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSData;

@interface Person (SWIFT_EXTENSION(CoreDataSampleApp))
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, strong) NSData * _Nullable photo;
@end

@class UITableView;
@class UITableViewCell;
@class UITableViewRowAction;
@class NSBundle;

SWIFT_CLASS("_TtC17CoreDataSampleApp29SaveAPIResponseViewController")
@interface SaveAPIResponseViewController : UIViewController <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified tableVIew;
@property (nonatomic, copy) NSArray<NSManagedObject *> * _Nonnull JWED;
@property (nonatomic, readonly, strong) NSManagedObjectContext * _Nonnull managedContext;
@property (nonatomic, strong) NSEntityDescription * _Nullable entity;
@property (nonatomic, readonly, strong) NSFetchRequest<NSManagedObject *> * _Nonnull fetchRequest;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)getFromCoreData;
- (IBAction)btnClick;
- (void)setSaveManualValues;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (NSArray<UITableViewRowAction *> * _Nullable)tableView:(UITableView * _Nonnull)tableView editActionsForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIAlertView;

SWIFT_CLASS("_TtC17CoreDataSampleApp14ViewController")
@interface ViewController : UIViewController <UIScrollViewDelegate, UITableViewDataSource, UIAlertViewDelegate, UITableViewDelegate>
@property (nonatomic, strong) IBOutlet UITableView * _Null_unspecified tblView;
@property (nonatomic, copy) NSString * _Nullable valueSentFromSecondViewController;
@property (nonatomic, readonly, strong) NSManagedObjectContext * _Nonnull context;
@property (nonatomic, copy) NSArray<Person *> * _Nonnull tasks;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (IBAction)Add;
- (void)alertView:(UIAlertView * _Nonnull)alertView clickedButtonAtIndex:(NSInteger)buttonIndex;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)getData;
- (void)tableView:(UITableView * _Nonnull)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImageView;

SWIFT_CLASS("_TtC17CoreDataSampleApp20sampleViewController")
@interface sampleViewController : UIViewController <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified tableVIew;
@property (nonatomic, copy) NSArray<NSManagedObject *> * _Nonnull people;
@property (nonatomic, readonly, strong) NSManagedObjectContext * _Nonnull managedContext;
@property (nonatomic, strong) NSEntityDescription * _Nullable entity;
@property (nonatomic, readonly, strong) NSFetchRequest<NSManagedObject *> * _Nonnull fetchRequest;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified imageVIew;
- (void)getFromCoreData;
- (IBAction)btnClick;
- (void)editTextField;
- (void)saveWithName:(NSString * _Nonnull)name;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (NSArray<UITableViewRowAction *> * _Nullable)tableView:(UITableView * _Nonnull)tableView editActionsForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17CoreDataSampleApp18testViewController")
@interface testViewController : UIViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
