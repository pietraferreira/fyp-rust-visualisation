function classifyCodeElement(elementType) {
  switch (elementType) {
    case 'mutable_borrow':
      return 'highlight-mutable';
    case 'immutable_borrow':
      return 'highlight-immutable';
    case 'ownership_transfer':
      return 'highlight-ownership';
    default:
      return 'highlight-default';
  }
}

module.exports = { classifyCodeElement };
