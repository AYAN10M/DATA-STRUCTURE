import pyotp
import hashlib
import hmac
import base64
import time

def generate_totp(email):
    secret = (email + "HENNGECHALLENGE004").encode()
    time_step = int(time.time()) // 30
    msg = time_step.to_bytes(8, 'big')
    h = hmac.new(secret, msg, hashlib.sha512).digest()
    o = h[-1] & 0x0F    
    code = (int.from_bytes(h[o:o+4], 'big') & 0x7FFFFFFF) % 10000000000
    return f"{code:010d}"

email = "gopalchandrahaldar1997@gmail.com"
print(generate_totp(email))
