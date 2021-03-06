#ifndef __CDK12_AST_NE_H__
#define __CDK12_AST_NE_H__

#include <cdk/ast/binary_expression_node.h>

namespace cdk {

  /**
   * Class for describing the inequality operator
   */
  class ne_node: public binary_expression_node {
  public:
    /**
     * @param lineno source code line number for this node
     * @param left first operand
     * @param right second operand
     */
    inline ne_node(int lineno, expression_node *left, expression_node *right) :
        binary_expression_node(lineno, left, right) {
    }

    /**
     * @param sp semantic processor visitor
     * @param level syntactic tree level
     */
    void accept(basic_ast_visitor *sp, int level) {
      sp->do_ne_node(this, level);
    }

  };

} // cdk

#endif
