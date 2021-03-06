//
//  lowestCommonAncestor.hpp
//  algorithms
//
//  Created by alifar on 7/4/16.
//  Copyright © 2016 alifar. All rights reserved.
//

#ifndef lowestCommonAncestor_hpp
#define lowestCommonAncestor_hpp

#include <stdio.h>
#include "bstWithParent.hpp"

class Lca: public BstWithParent{
public:
    BstNodeWithParent * lowestCommonAncestorParent(BstNodeWithParent *, BstNodeWithParent *);
    BstNodeWithParent * lowestCommonAncesrotRoot(BstNodeWithParent *, BstNodeWithParent *, BstNodeWithParent *);
};

#endif /* lowestCommonAncestor_hpp */
