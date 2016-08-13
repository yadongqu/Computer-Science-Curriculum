test = {
  'name': 'Question 6',
  'points': 1,
  'suites': [
    {
      'cases': [
        {
          'code': r"""
          >>> always_roll_5 = always_roll(5)
          >>> # Be specific about the error type (AssertionError, rather than Error)
          >>> always_roll_5 == check_strategy(always_roll_5)
          bc6c4798917b91886d7fa5f56e42878f
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          >>> def fail_15_20(score, opponent_score):
          ...     if score == 15 and opponent_score == 20:
          ...         return 100
          ...     return 5
          >>> # Be specific about the error type (AssertionError, rather than Error)
          >>> fail_15_20 == check_strategy(fail_15_20)
          cfc38925cef46fde683fbb0cbb4d4025
          # locked
          """,
          'hidden': False,
          'locked': True
        }
      ],
      'scored': True,
      'setup': r"""
      >>> from hog import *
      """,
      'teardown': '',
      'type': 'doctest'
    }
  ]
}
