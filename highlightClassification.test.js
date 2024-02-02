const { classifyCodeElement } = require('./highlightClassification');

describe('classifyCodeElement', () => {
  test('correctly classifies mutable borrows', () => {
    expect(classifyCodeElement('mutable_borrow')).toBe('highlight-mutable');
  });

  test('correctly classifies immutable borrows', () => {
    expect(classifyCodeElement('immutable_borrow')).toBe('highlight-immutable');
  });

  test('correctly classifies ownership transfers', () => {
    expect(classifyCodeElement('ownership_transfer')).toBe('highlight-ownership');
  });

  test('defaults for unrecognized elements', () => {
    expect(classifyCodeElement('unknown')).toBe('highlight-default');
  });
});
