test = {
  'name': 'Problem EC',
  'points': 2,
  'suites': [
    {
      'cases': [
        {
          'code': r"""
          >>> # Testing status parameters
          >>> slow = SlowThrower()
          >>> stun = StunThrower()
          >>> SlowThrower.food_cost
          c9452203eb0b0f0bd2454586a6c2fc5c
          # locked
          >>> StunThrower.food_cost
          50ae32be3e31df6c59633df7fdfb3a72
          # locked
          >>> slow.armor
          d89cf7c79d5a479b0f636734143ed5e6
          # locked
          >>> stun.armor
          d89cf7c79d5a479b0f636734143ed5e6
          # locked
          """,
          'hidden': False,
          'locked': True
        },
        {
          'code': r"""
          >>> # Testing Slow
          >>> slow = SlowThrower()
          >>> bee = Bee(3)
          >>> colony.places["tunnel_0_0"].add_insect(slow)
          >>> colony.places["tunnel_0_4"].add_insect(bee)
          >>> slow.action(colony)
          >>> colony.time = 1
          >>> bee.action(colony)
          >>> bee.place.name # SlowThrower should cause slowness on odd turns
          'tunnel_0_4'
          >>> colony.time += 1
          >>> bee.action(colony)
          >>> bee.place.name # SlowThrower should cause slowness on odd turns
          'tunnel_0_3'
          >>> for _ in range(3):
          ...    colony.time += 1
          ...    bee.action(colony)
          >>> bee.place.name
          'tunnel_0_1'
          """,
          'hidden': False,
          'locked': False
        },
        {
          'code': r"""
          >>> # Testing Stun
          >>> error_msg = "StunThrower doesn't stun for exactly one turn."
          >>> stun = StunThrower()
          >>> bee = Bee(3)
          >>> colony.places["tunnel_0_0"].add_insect(stun)
          >>> colony.places["tunnel_0_4"].add_insect(bee)
          >>> stun.action(colony)
          >>> bee.action(colony)
          >>> bee.place.name # StunThrower should stun for exactly one turn
          'tunnel_0_4'
          >>> bee.action(colony)
          >>> bee.place.name # StunThrower should stun for exactly one turn
          'tunnel_0_3'
          """,
          'hidden': False,
          'locked': False
        }
      ],
      'scored': True,
      'setup': r"""
      >>> from ants import *
      >>> hive, layout = Hive(AssaultPlan()), dry_layout
      >>> dimensions = (1, 9)
      >>> colony = AntColony(None, hive, ant_types(), layout, dimensions)
      """,
      'teardown': '',
      'type': 'doctest'
    }
  ]
}
