/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSString, TSTFunctionEndNode;

@interface TSTFunctionNode : TSTExpressionNode {
    TSTFunctionEndNode *mFunctionEndNode;
    int mFunctionIndex;
    NSString *mInvalidFunctionName;
    NSArray *mWhitespaceAfterDelimiters;
    NSString *mWhitespaceAfterFunctionName;
    NSString *mWhitespaceAfterLeftParen;
}

@property(retain) TSTFunctionEndNode * functionEndNode;
@property(readonly) int functionIndex;
@property(retain) NSString * invalidFunctionName;
@property(readonly) short maxArguments;
@property(readonly) short minArguments;
@property(readonly) unsigned int numArguments;
@property(retain) NSArray * whitespaceAfterDelimiters;
@property(retain) NSString * whitespaceAfterFunctionName;
@property(retain) NSString * whitespaceAfterLeftParen;

+ (id)newDefaultFunctionNodeWithContext:(id)arg1 functionIndex:(int)arg2;
+ (id)newSumNodeWithContext:(id)arg1 children:(id)arg2;

- (void)addTSTCanvasReferencesToSet:(id)arg1 inRangeContext:(int)arg2 withColorHelper:(id)arg3 preferringNodesFromStorage:(id)arg4 allVisitedNodes:(id)arg5;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray { char *x1; unsigned int x2; unsigned int x3; id x4; }*)arg1 hostCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)dealloc;
- (id)exportString;
- (id)formulaPlainText;
- (id)functionEndNode;
- (int)functionIndex;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initFromArchive:(const struct FunctionNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ExpressionNodeArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; unsigned int x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (id)initWithContext:(id)arg1 functionIndex:(int)arg2 children:(id)arg3 firstIndex:(unsigned int)arg4 lastIndex:(unsigned int)arg5;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 unwrapped:(BOOL)arg3;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)invalidFunctionName;
- (BOOL)isDescendantOfChild:(id)arg1;
- (BOOL)isEmptyFunctionNode;
- (BOOL)isMissingRequiredArgument;
- (short)maxArguments;
- (short)minArguments;
- (unsigned int)numArguments;
- (id)p_functionSpec;
- (void)p_resetArgumentSpecForChildren;
- (void)resurrectModeTokens;
- (void)saveToArchive:(struct FunctionNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ExpressionNodeArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; unsigned int x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setFunctionEndNode:(id)arg1;
- (void)setInvalidFunctionName:(id)arg1;
- (void)setWhitespaceAfterDelimiters:(id)arg1;
- (void)setWhitespaceAfterFunctionName:(id)arg1;
- (void)setWhitespaceAfterLeftParen:(id)arg1;
- (id)string;
- (int)tokenType;
- (id)whitespaceAfterDelimiters;
- (id)whitespaceAfterFunctionName;
- (id)whitespaceAfterLeftParen;

@end