/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSPProxyObjectMapping>;

@interface TSPCopyArchiver : TSPArchiver <TSPProxyObjectMappingProvider> {
    <TSPProxyObjectMapping> *_proxyObjectMapping;
}

@property <TSPProxyObjectMapping> * proxyObjectMapping;

- (void).cxx_destruct;
- (BOOL)isForCopy;
- (id)proxyObjectMapping;
- (void)setProxyObjectMapping:(id)arg1;
- (void)setStrongLazyReference:(id)arg1 message:(struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg2;
- (void)setStrongReference:(id)arg1 message:(struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg2;
- (void)setWeakLazyReference:(id)arg1 message:(struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg2;
- (void)setWeakReference:(id)arg1 message:(struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg2;

@end