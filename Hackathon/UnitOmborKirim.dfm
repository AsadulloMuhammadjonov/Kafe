object FormOmborKirim: TFormOmborKirim
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormOmborKirim'
  ClientHeight = 403
  ClientWidth = 480
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -24
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 29
  object Label1: TLabel
    Left = 16
    Top = 240
    Width = 147
    Height = 29
    Caption = 'Omborda ->'
  end
  object Label2: TLabel
    Left = 208
    Top = 240
    Width = 15
    Height = 29
    Caption = '0'
  end
  object Label3: TLabel
    Left = 200
    Top = 112
    Width = 15
    Height = 29
    Caption = '0'
    Visible = False
  end
  object LabeledEdit1: TLabeledEdit
    Left = 16
    Top = 56
    Width = 200
    Height = 37
    Alignment = taCenter
    EditLabel.Width = 64
    EditLabel.Height = 29
    EditLabel.Caption = 'Nomi'
    TabOrder = 0
  end
  object LabeledEdit2: TLabeledEdit
    Left = 16
    Top = 160
    Width = 200
    Height = 37
    Alignment = taCenter
    EditLabel.Width = 65
    EditLabel.Height = 29
    EditLabel.Caption = 'Narxi'
    TabOrder = 1
  end
  object LabeledEdit3: TLabeledEdit
    Left = 240
    Top = 56
    Width = 200
    Height = 37
    Alignment = taCenter
    EditLabel.Width = 83
    EditLabel.Height = 29
    EditLabel.Caption = 'Miqdor'
    TabOrder = 2
  end
  object LabeledEdit4: TLabeledEdit
    Left = 240
    Top = 160
    Width = 200
    Height = 37
    Alignment = taCenter
    EditLabel.Width = 69
    EditLabel.Height = 29
    EditLabel.Caption = 'Birligi'
    TabOrder = 3
  end
  object Button1: TButton
    Left = 16
    Top = 312
    Width = 184
    Height = 65
    Caption = 'Saqlash'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 256
    Top = 312
    Width = 184
    Height = 65
    Caption = 'Chiqish'
    TabOrder = 5
    OnClick = Button2Click
  end
end
